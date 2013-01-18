/*
 Copyright 2013 Mitchell Grenier
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.*/ 

#include "RotorManager.h"
#include "Reflector.h"

RotorManager::RotorManager(){
}

RotorManager::RotorManager(int numRotors){
    for(int i=0; i < numRotors; i++){
        rotors.push_back(new Rotor());
    }
}

RotorManager::~RotorManager(){
    int numRotors = (int)rotors.size();
    for(int i=0; i<numRotors; i++){
        delete rotors[i];
    }
    rotors.clear();
}

void RotorManager::turn(){
    int numRotors = (int)rotors.size();
    int kick = 1;
    
    while(kick && numRotors != 0){
        numRotors -= 1;
        kick = rotors[numRotors]->turnRotor();
    }
}

void RotorManager::setRotor(int rotorNumber, int setting, std::vector<int>key){
    int numRotors = (int)rotors.size();
    
    rotors[numRotors-rotorNumber]->setRotorKey(key);
    rotors[numRotors-rotorNumber]->setRotor(setting%26);
}

void RotorManager::printRotorStatus(){
    int numRotors = (int)rotors.size();
    std::cout << "The Rotors are at positions: ";
    for(int i=0; i < numRotors; i++){
        std::cout << rotors[i]->getSetting() << " ";
    }
    
    std::cout << "\n";
}

char RotorManager::processLetter(char toProcess){
    int letter = toProcess - 65;
    int numRotors = (int)rotors.size();
    
    for(int i = 1; i <= numRotors; i++){                        //Take Unencrypted letter and send through rotors
        letter = rotors[numRotors - i]->shiftLetter(letter);
        if(letter > 25){
            letter %= 26;
        }
    }
    letter = reflect(letter+65, rotors[0]);                                //Reflect the letter
    letter -= 65;

    
    for(int i = 1; i < numRotors; i++){                      //Send it back through the rotors
        letter = rotors[i]->shiftLetterReverse(letter);
        if(letter > 25){
            letter %= 26;
        }
    }
    turn();
    return letter + 65;
}
//
//  RotorManager.cpp
//  Enigma
//
//  Created by Mitchell on 2013-01-13.
//  Copyright (c) 2013 Mitchell. All rights reserved.
//

#include "RotorManager.h"
#include "Reflector.h"

RotorManager::RotorManager(){
    //rotors = *new std::vector<Rotor*>[0];
}

RotorManager::RotorManager(int numRotors){
    //rotors = *new std::vector<Rotor*>;
    
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
    //std::cout << "Reflected from " << (char)(65+letter) << " to ";
    //std::cout << "\nPROPER REFLECTION TEST: " << "Reflected from " << (char)(65+letter) << " to " << reflectProper(letter, rotors[0]) << "\n";
    letter = reflectProper(letter+65, rotors[0]);                                //Reflect the letter
    letter -= 65;
    //std::cout << (char)(65+letter) << "\n";

    
    for(int i = 1; i < numRotors; i++){                      //Send it back through the rotors
        letter = rotors[i]->shiftLetterReverse(letter);
        if(letter > 25){
            letter %= 26;
        }
    }
    turn();
    return letter + 65;
}
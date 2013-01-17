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
 
#include "Reflector.h"

char reflectProper(char letter, Rotor *lastRotor){
    
    //Reflector A : ??? / ????
    char reflectorarray[13][2] = {{'A', 'E'},{'B', 'J'},{'C', 'M'},{'D', 'Z'},{'F', 'L'},{'G', 'Y'},{'H', 'X'},{'I', 'V'},{'K', 'W'},{'N','R'},{'O','Q'},{'P','U'},{'S','T'}};
    
    std::vector<int> const *key = lastRotor->getRotorKey();
    char mapto = 'A';
    for(int j = 0; j < 13; j++){                    //Find Desired Map
        if(reflectorarray[j][0] == letter){
            mapto = reflectorarray[j][1];
            break;
        }else if(reflectorarray[j][1] == letter){
            mapto = reflectorarray[j][0];
            break;
        }
    }
    //std::cout << "Reflected a " << letter << " into a " << mapto << "\n";
    int maptoi = mapto-65;
    
    for(int i=0; i < 26; i++){
        if(key->at(i) == maptoi){
            //std::cout << "Processed a " << mapto << " into a " << (char)(i+65) << "\n";
            return i+65;
        }
    }
    
    return 'A';
}
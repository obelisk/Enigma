//
//  Reflector.cpp
//  Enigma
//
//  Created by Mitchell on 2013-01-16.
//  Copyright (c) 2013 Mitchell. All rights reserved.
//

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
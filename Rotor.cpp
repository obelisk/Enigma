//
//  Rotor.cpp
//  Enigma
//
//  Created by Mitchell on 2013-01-13.
//  Copyright (c) 2013 Mitchell. All rights reserved.
//

#include "Rotor.h"

Rotor::Rotor(int setting){
    this->setting = setting;
}

Rotor::Rotor(){
    setting = 0;
}

Rotor::~Rotor(){
    key.clear();
}

int Rotor::turnRotor(){
    if(key.size() > 0){
        int first = key[0];
        key.erase(key.begin());
        key.push_back(first);
    }
    setting += 1;
    if(setting ==  26){
        setting = 0;
        return 1;
    }
    return 0;
}

int Rotor::turnRotor(int turn){
    setting += turn;
    if(setting >= 26){
        int kick = (setting+turn)/26;
        setting += turn;
        setting %= 26;
        return kick;
    }
    return 0;
}

int Rotor::getSetting(){
    return setting;
}

void Rotor::setRotor(int newSetting){
    setting = newSetting;
    for(int i = 0; i < newSetting; i++){
        if(key.size() > 0){
            int first = key[0];
            key.erase(key.begin());
            key.push_back(first);
        }
    }
}

void Rotor::setRotorKey(std::vector<int>key){
    this->key = key;
}

std::vector<int>* Rotor::getRotorKey(){
    return &key;
}

int Rotor::shiftLetter(int letter){
    //std::cout << "Processed a " << (char)(65+letter) << " into a " << (char)(65+key[letter]) << "\n";
    //for(int i = 0; i<26; i++){
    //    std::cout << (char)(65+key[i]);
    //}
    //std::cout << "\n";
    return key[letter];
}

int Rotor::shiftLetterReverse(int letter){
    for(int i=0; i < 26; i++){
        if(key.at(i) == letter){
            //std::cout << "Processed a " << mapto << " into a " << (char)(i+65) << "\n";
            return i;
        }
    }
    return 0;
}

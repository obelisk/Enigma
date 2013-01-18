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
    return key[letter];
}

int Rotor::shiftLetterReverse(int letter){
    for(int i=0; i < 26; i++){
        if(key.at(i) == letter){
            return i;
        }
    }
    return 0;
}

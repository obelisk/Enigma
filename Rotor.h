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

#ifndef __Enigma__Rotor__
#define __Enigma__Rotor__

#include <iostream>
#include <vector>

class Rotor {
    
public:
    Rotor(int setting);
    Rotor();
    ~Rotor();
    int turnRotor();
    int turnRotor(int turn);
    int getSetting();
    void setRotor(int newSetting);
    void setRotorKey(std::vector<int>key);
    std::vector<int>* getRotorKey();
    int shiftLetter(int letter);
    int shiftLetterReverse(int letter);
private:
    int setting;
    std::vector<int> key;
    

};

#endif /* defined(__Enigma__Rotor__) */

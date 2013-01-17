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

#ifndef __Enigma__RotorManager__
#define __Enigma__RotorManager__

#include <iostream>
#include "Rotor.h"
#include <vector>

class RotorManager {
    
public:
    RotorManager();
    RotorManager(int numRotors);
    ~RotorManager();
    void turn();
    void printRotorStatus();
    void setRotor(int rotorNumber, int setting, std::vector<int> key);
    char processLetter(char letter);
private:
    std::vector<Rotor*> rotors;
    
};

#endif /* defined(__Enigma__RotorManager__) */

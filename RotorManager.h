//
//  RotorManager.h
//  Enigma
//
//  Created by Mitchell on 2013-01-13.
//  Copyright (c) 2013 Mitchell. All rights reserved.
//

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

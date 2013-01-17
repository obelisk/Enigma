//
//  Rotor.h
//  Enigma
//
//  Created by Mitchell on 2013-01-13.
//  Copyright (c) 2013 Mitchell. All rights reserved.
//

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

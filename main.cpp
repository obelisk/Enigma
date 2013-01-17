//
//  main.cpp
//  Enigma
//
//  Created by Mitchell on 2013-01-13.
//  Copyright (c) 2013 Mitchell. All rights reserved.
//

#include <iostream>
#include <string>
#include "Rotor.h"
#include "RotorManager.h"
#include "Plugboard.h"
#include "RotorConfigurations.h"
#include <vector>

int main(int argc, const char * argv[]){

    //Init primitive values
    int numRotors = 4;
    bool usePlugboard = 1;
    
    //Init objection values
    std::string message = " ZRRN PDYU LVOP IQFH HXXK AWJO GZHK IEKV OHWQ CLTD";
    std::string messageparse = "";
    std::string returned = "";
    
    std::cout << "Welcome To Enigma!\n";
    
    runConfigure();
    
    //Initalize the RotorManager
    RotorManager *rotorSystem = new RotorManager(numRotors);
    
    //Add your rotors into the rotor manager, Rotors are set right to left, like a real enigma machine.
    // <>    <>    <>
    // 3     2     1
    rotorSystem->setRotor(1, 4, scramble1i);
    rotorSystem->setRotor(2, 25, scramble2i);
    rotorSystem->setRotor(3, 14, scramble3i);
    rotorSystem->setRotor(4, 11, scramble4i);
    rotorSystem->printRotorStatus();
    
    for(int i=0; i<message.length(); i++){
        if(message.at(i) != ' '){
            messageparse += message.at(i);
        }
    }
    
    if(usePlugboard){
        message = plugboardRun(message);
    }
    for(int i=0; i<message.length(); i++){
        returned += rotorSystem->processLetter(message.at(i));
    }
    if(usePlugboard){
        returned = plugboardRun(returned);
    }
    
    for(int i=0; i<returned.length(); i++){
        if(i%4 == 0){
            std::cout << ' ';
        }
        std::cout << returned.at(i);
    }
    
    delete rotorSystem;
    deleteConfigurations();
    return 0;
}


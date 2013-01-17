//
//  Plugboard.cpp
//  Enigma
//
//  Created by Mitchell on 2013-01-13.
//  Copyright (c) 2013 Mitchell. All rights reserved.
//
#include "Plugboard.h"

std::string plugboardRun(std::string message){
    
    //Create the plug board scamble
    char plugboardarray[13][2] = {{'A', 'V'},{'B', 'X'},{'C', 'Y'},{'D', 'T'},{'E', 'P'},{'F', 'S'},{'G', 'Z'},{'H', 'W'},{'I', 'N'},{'J', 'O'},{'K', 'U'},{'L', 'R'},{'M', 'Q'}};
    
    std::string postplug = "";
    for(int i = 0; i < message.length(); i++){
        for(int j = 0; j < 13; j++){
            if(plugboardarray[j][0] == message.at(i)){
                postplug += plugboardarray[j][1];
            }else if(plugboardarray[j][1] == message.at(i)){
                postplug += plugboardarray[j][0];
            }
        }
    }
    return postplug;
}
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
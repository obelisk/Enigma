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

#ifndef Enigma_RotorConfigurations_h
#define Enigma_RotorConfigurations_h

#include <vector>

std::vector<int> scramble1i;
std::vector<int> scramble2i;
std::vector<int> scramble3i;
std::vector<int> scramble4i;
std::vector<int> scramble5i;

void runConfigure(){
    //Rotor: I - 1930 / Enigma 1
    scramble1i.push_back(4);scramble1i.push_back(10);scramble1i.push_back(12);scramble1i.push_back(5);
    scramble1i.push_back(11);scramble1i.push_back(6);scramble1i.push_back(3);scramble1i.push_back(16);
    scramble1i.push_back(21);scramble1i.push_back(25);scramble1i.push_back(13);scramble1i.push_back(19);
    scramble1i.push_back(14);scramble1i.push_back(22);scramble1i.push_back(24);scramble1i.push_back(7);
    scramble1i.push_back(23);scramble1i.push_back(20);scramble1i.push_back(18);scramble1i.push_back(15);
    scramble1i.push_back(0);scramble1i.push_back(8);scramble1i.push_back(1);scramble1i.push_back(17);
    scramble1i.push_back(2);scramble1i.push_back(9);
    
    //Rotor: II - 1930 / Enigma 1
    scramble2i.push_back(0);scramble2i.push_back(9);scramble2i.push_back(3);
    scramble2i.push_back(10);scramble2i.push_back(18);scramble2i.push_back(8);
    scramble2i.push_back(17);scramble2i.push_back(20);scramble2i.push_back(23);
    scramble2i.push_back(1);scramble2i.push_back(11);scramble2i.push_back(7);
    scramble2i.push_back(22);scramble2i.push_back(19);scramble2i.push_back(12);
    scramble2i.push_back(2);scramble2i.push_back(16);scramble2i.push_back(6);
    scramble2i.push_back(25);scramble2i.push_back(13);scramble2i.push_back(15);
    scramble2i.push_back(24);scramble2i.push_back(5);scramble2i.push_back(21);
    scramble2i.push_back(14);scramble2i.push_back(4);
    
    scramble3i.push_back(14);scramble3i.push_back(2);scramble3i.push_back(17);scramble3i.push_back(4);
    scramble3i.push_back(18);scramble3i.push_back(12);scramble3i.push_back(8);scramble3i.push_back(13);
    scramble3i.push_back(19);scramble3i.push_back(21);scramble3i.push_back(7);scramble3i.push_back(11);
    scramble3i.push_back(0);scramble3i.push_back(16);scramble3i.push_back(22);scramble3i.push_back(5);
    scramble3i.push_back(6);scramble3i.push_back(15);scramble3i.push_back(24);scramble3i.push_back(10);
    scramble3i.push_back(9);scramble3i.push_back(20);scramble3i.push_back(23);scramble3i.push_back(3);
    scramble3i.push_back(1);scramble3i.push_back(25);
    
    scramble4i.push_back(22);scramble4i.push_back(20);scramble4i.push_back(4);scramble4i.push_back(17);
    scramble4i.push_back(21);scramble4i.push_back(3);scramble4i.push_back(10);scramble4i.push_back(19);
    scramble4i.push_back(12);scramble4i.push_back(9);scramble4i.push_back(25);scramble4i.push_back(15);
    scramble4i.push_back(8);scramble4i.push_back(16);scramble4i.push_back(0);scramble4i.push_back(18);
    scramble4i.push_back(5);scramble4i.push_back(6);scramble4i.push_back(24);scramble4i.push_back(1);
    scramble4i.push_back(2);scramble4i.push_back(11);scramble4i.push_back(13);scramble4i.push_back(23);
    scramble4i.push_back(7);scramble4i.push_back(14);
    
    scramble5i.push_back(5);scramble5i.push_back(13);scramble5i.push_back(0);scramble5i.push_back(6);
    scramble5i.push_back(9);scramble5i.push_back(20);scramble5i.push_back(2);scramble5i.push_back(14);
    scramble5i.push_back(11);scramble5i.push_back(8);scramble5i.push_back(17);scramble5i.push_back(15);
    scramble5i.push_back(23);scramble5i.push_back(19);scramble5i.push_back(12);scramble5i.push_back(24);
    scramble5i.push_back(4);scramble5i.push_back(21);scramble5i.push_back(22);scramble5i.push_back(18);
    scramble5i.push_back(3);scramble5i.push_back(7);scramble5i.push_back(16);scramble5i.push_back(1);
    scramble5i.push_back(10);scramble5i.push_back(25);
}

void deleteConfigurations(){
    scramble1i.clear();
    scramble2i.clear();
    scramble3i.clear();
    scramble4i.clear();
    scramble5i.clear();
}

#endif

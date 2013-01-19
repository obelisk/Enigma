Enigma


This is a small program I wrote that will encrypt strings in the same fashion as the WWII Enigma Cipher device used by the Germans.

The program is written in C++ and was tested on OS X and Linux boxes.  I hope you find it interesting and useful for demonstrations or understanding how the enigma code worked.

How to use:

RotorConfigurations.h

Contains the wire settings for different rotors.  The first two are actual rotor settings from WWII save the kick point, although that wouldn't be too hard to fix.

Plugboard.cpp

Contains the settings for the plugboard letter swaps.

Main.cpp

Contains all other settings.  The default settings are 4 rotors at 4, 25, 14, 11 respectively.  More or less rotors can be used if desired but the numRotors variable must be updated to the correct value.

The plugboard can be turned off if desiered by setting the usePlugboard variable to 0.


About the Apache 2.0 Licence

Basically, I just want you to (1) Tell me if you are going to use my code commercially and (2) Give me credit whenever you use my code.
Simple.

Have fun and never stop learning.

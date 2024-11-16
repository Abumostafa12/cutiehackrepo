
#ifndef display_h
#define display_h

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Display{
    void DisplayGameState(bool mode);
    void DisplayHangmanGrid(int wrong); 
    void DisplayGuessedLetters(string a);   
};


#endif
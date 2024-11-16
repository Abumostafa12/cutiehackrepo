#ifndef CONTROLLER_H
#define CONTROLLER_H

//Includes from all headers
#include "input.h"
#include "playerData.h"
#include "view.h"
#include "model.h"

//Controller class to controll the game and functions
class Controller {
    private:
        //User input Var
        char userInput;
        const int numPlayers = 2;
        //Class variable to hold player data
        PlayerData *players;
    public:
        //Contstructor and destructor
        Controller();
        ~Controller();
        //Model object to hold player data
        Model pdata;
        //View object to output stuff
        View display;               
        Input in;
        //Function to Set up Game  
        void setUp();            
        //Need a function to keep game going   
        void mainMenu();
        //Make game
        void game();
    
    friend class SetUpControllerTest;
};


#endif /* CONTROLLER_H */
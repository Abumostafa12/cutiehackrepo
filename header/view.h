#ifndef VIEW_H
#define VIEW_H
#include "playerData.h"


class View{
    public:
        //Output the rules of the game
        void rules();
        //Output the menu to chose from
        void menu();
        //Prompt outputs
        virtual void coordinatePrompt();
        virtual void directionPrompt();
        virtual void userInputError();
        virtual void playerNamePrompt(int);
        virtual void shipFitMessage(bool);
        virtual void shipPosCheckMessage();
        virtual void startTwoPlayerMessage();
        virtual void quitMessage();
        //Draw player grid in terminal
        virtual void drawPlayerGrid(PlayerData);
        //Output a blank for when playing
        virtual void drawBlankPlayerGrid(PlayerData);
};

#endif
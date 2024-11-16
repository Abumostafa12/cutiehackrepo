#ifndef PLAYERDATA_H
#define PLAYERDATA_H
//Includes
#include "Grid.h"

class PlayerData {
    private:
        //Making the grid
        Grid *gridData;   
        //Char array for the player name
        char *playerName;
        //Int value to know if player still has ships up or not
        int shipHealth;
    public:
        //constructor and destructor
        PlayerData();
        virtual ~PlayerData();
        //Setter functions
        virtual void setPlayerName(char *) ;
        virtual void resetGrid();
        //Getter functions
        virtual char *returnPlayerName();
        virtual Grid *returnGrid();
        virtual int returnShipHealth();
        //Board update functions
        virtual void shootCoordinate(int *);
        virtual void updateGrid(Grid *newGrid);
        //Need to decrement ship health per hit on a ship
        virtual void decHealth();
        virtual int returnHealth();
};

#endif /* PLAYERDATA_H */
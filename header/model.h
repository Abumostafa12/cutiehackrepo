#ifndef MODEL_H
#define MODEL_H
//Includes
#include "playerData.h"
using namespace std;

class Model{
    private:
        int shipSize[5] = {5, 4, 3, 3, 2};
        int shipType[5] = {5, 4, 3, 2, 1};
        int sum;
    public:
        Model();
        int getSum();
        int* getShipSize();
        int* getShipType();
        bool shipFits(Grid *, int *, int , int );
        Grid *placeShip(Grid *, int *, int, int);
};

#endif
#ifndef GRID_H
#define GRID_H
//include needed iles
#include "Cell.h"

class Grid {
    int gridSize;
    //Make the game board
    Cell **board;
public:
    //Constructro
    Grid();
    //Destructor
    ~Grid();
    void CreateBoard();
    void ResetBoard();
    void Update(int *);
    bool returnCellShot(int, int);
    int returnCellShip(int, int);
    void addCellShip(int, int, int);
};

#endif /* GRID_H */
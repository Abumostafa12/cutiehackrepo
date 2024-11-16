#ifndef CELL_H
#define CELL_H

class Cell {
private:
    //Variable to know if a ship exists in a cell
    int shipExists;
    //Variable to know if a shot has been attempted in the cell
    bool shot;
    //Variable to know if a ship in the cell has actually been hit
    bool hit;
public:
    //Constructor
    Cell();
    void resetCell();
    //Setter functions
    void HasShip(int);
    void HasBeenShot(bool);
    void HasHit();
    //Gettter functions
    bool returnShot();
    int returnShip();
    bool returnHit();
};

#endif /* CELL_H */

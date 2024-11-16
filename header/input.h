#ifndef INPUT_H
#define INPUT_H
#include "view.h"

class Input {
    private:
        int size, nameSize;
        // alloc space for coord input and name
        char *input, *name;
    public:
        //Constructor and Destructor
        Input();
        virtual ~Input();

        virtual int getSize();
        virtual int getNameSize();
        virtual char *getInput();
        virtual char *getName();
        virtual int *inputCoordinates();
        virtual int inputUserSetUp();
        virtual char *inputPlayerData();
        virtual int inputMenu(int);
        virtual char inputLikePlacement();
        //View object to output stuff
        View inputDisplay;

};

#endif
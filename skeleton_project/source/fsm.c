#include "driver/elevio.h"
#include "fsm.h"

enum {
    initialize = 0,
    idle = 1,
    moveUp = 2,
    moveDown = 3,
    stop = 4
} State;

void stateInitialize(){

    createOrderlist();
};

void stateIdle(){

};

void stateMoveUp(){
    elevio_motorDirection(DIRN_UP);
};

void stateMoveDown(){
    elevio_motorDirection(DIRN_DOWN);

};

void stateStop(){
    elevio_motorDirection(DIRN_STOP);
};

void loop(){
    switch(State){
        case initialize:

        break;

        case idle:

        break;

        case moveUp:
        
        break;

        case moveDown:

        break;

        case stop:

        break;

    }
}
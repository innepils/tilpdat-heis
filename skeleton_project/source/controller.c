#include "driver/elevio.h"
#include "controller.h"

int currentFloor = elevio_floorSensor();

void goToFloor(int targetFloor){
    if(currentFloor < targetFloor){
        stateMoveUp();
        while(currentFloor != targetFloor){
            if(currentFloor == targetFloor){
                stateStop();
            }
        }
    }
    if(currentFloor > targetFloor){
        stateMoveDown();
        while(currentFloor != targetFloor){
            if(currentFloor == targetFloor){
                stateStop();
            }
        }
    }
    if(currentFloor == targetFloor){
        stateIdle();
    }

};
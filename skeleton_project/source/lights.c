#include "elevio.h"

void floorLightOn(floor){
    int etasje = floor;
    while (etasje >= 0){
        if (etasje == 0){
            elevio_floorIndicator(1);
        }
        elif (etasje == 1){
            elevio_floorIndicator(2);
        }    
        elif (etasje == 2){
            elevio_floorIndicator(3);
        }    
        else (etasje == 3){
            elevio_floorIndicator(3);
        }  
    }      
};

void clearFloorLamp(floor){

};
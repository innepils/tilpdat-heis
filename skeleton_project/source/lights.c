#include "driver/elevio.h"
#include "lights.h"

void floorLightOn(int floor){
    int etasje = floor;
    while (etasje >= 0){
        if (etasje == 0){
            elevio_floorIndicator(0);
        }
        else if (etasje == 1){
            elevio_floorIndicator(1);
        }    
        else if (etasje == 2){
            elevio_floorIndicator(2);
        }    
        else {
            elevio_floorIndicator(3);
        }  
    }      
};
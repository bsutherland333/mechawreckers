/* Mechawreckers    MEEN 330   Oct. 2021 2

main.c -- the code that the robot executes
*/


#include <xc.h>

#include "drive-control/drive-control.h"


#pragma config FNOSC = FRC  // Update value in global-params if changed

int main(int argc, char **argv) {
    // Sets all pin registers to 0
    TRISA = 0;
    TRISB = 0;
    ANSA = 0;
    ANSB = 0;


    turnRight(2 * 3.1415 / 15.0, 15.0);

    while (1);
    return 0;
}
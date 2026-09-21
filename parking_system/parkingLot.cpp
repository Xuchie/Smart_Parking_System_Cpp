/*Create/manage parking slots
Display all slots
Find an available slot
Assign a vehicle to a slot
Release a slot when a vehicle leaves
Count available/occupied slots*/
#include <iostream>
#include <string>
#include "parkingLot.h"

using namespace std;

/*void displayParkingSlot(){
    //

};*/
void ParkingLot::displayParkingSlot();
{
    for (int i = 0; i < 20; i++)
    {
        slots[i].displayParkingSlot();
    }
}


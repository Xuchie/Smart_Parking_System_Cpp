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

ParkingLot::ParkingLot()
{
    // Zone A: slots 1 - 10
    for (int i = 0; i < 10; i++)
    {
        slots[i] = parking_slot(
            i + 1,
            'A',
            "Available",
            "None"
        );
    }

    // Zone B: slots 11 - 20
    for (int i = 10; i < 20; i++)
    {
        slots[i] = parking_slot(
            i + 1,
            'B',
            "Available",
            "None"
        );
    }
}

void ParkingLot::displayParkingSlots()
{
    cout << "\n========== PARKING LOT ==========\n";

    for (int i = 0; i < 20; i++)
    {
        slots[i].displayParkingSlot();
        cout << "-------------------------------\n";
    }
}

int ParkingLot::findAvailableSlot()
{
    for (int i = 0; i < 20; i++)
    {
        if (/* slot is available */ true)
        {
            return i;
        }
    }

    return -1;
}

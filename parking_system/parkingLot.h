#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "../models/parkingSlot.h"

class ParkingLot
{
private:
    parking_slot slots[20];

public:
    ParkingLot();

    void displayParkingSlots();
    int findAvailableSlot();
    bool parkVehicle(string plateNumber);
    bool releaseSlot(string plateNumber);
    int countAvailableSlots();
};

#endif
#ifndef PARKINGMANAGER_H
#define PARKINGMANAGER_H

#include "parkingLot.h"
#include "../models/vehicles.h"

class ParkingManager
{
private:
    ParkingLot parkingLot;

public:
    ParkingManager();

    void parkVehicle();
    void removeVehicle();
    void findVehicle();
    void displayParkingSlots();
    void displayAvailableSlots();

    void displayZones();
    void nextZone();
    void previousZone();
};

#endif
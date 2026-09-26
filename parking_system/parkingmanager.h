#ifndef PARKINGMANAGER_H
#define PARKINGMANAGER_H

#include "parkingLot.h"
#include "../models/vehicles.h"
#include "../dsa/Queue.h"
class ParkingManager
{
private:
    ParkingLot parkingLot;
    Queue waitingQueue;

public:
    ParkingManager();
    //
    void parkVehicle();
    void removeVehicle();
    void findVehicle();
    //
    void displayParkingSlots();
    void displayAvailableSlots();
    //
    void sortParkingSlots();

    void displayZones();
    void nextZone();
    void previousZone();

    void displayWaitingQueue();
};

#endif
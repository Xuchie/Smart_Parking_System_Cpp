#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "../models/parkingSlot.h"
#include "../dsa/doublycircularLL.h"
class ParkingLot
{
private:
    parking_slot slots[20];
    DoublyCircularLinkedList zones;

public:
    ParkingLot();
    void displayZones();
    void nextZone();
    void previousZone();

    void displayParkingSlots();
    int findAvailableSlot();
    bool parkVehicle(string plateNumber);
    bool releaseSlot(string plateNumber);
    int countAvailableSlots();

    parking_slot* getSlots();
};

#endif
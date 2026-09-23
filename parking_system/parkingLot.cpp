#include <iostream>
#include "parkingLot.h"



using namespace std;

ParkingLot::ParkingLot()
{
    // Zone A Slot 1 - 10
    for (int i = 0; i < 10; i++)
    {
        slots[i] = parking_slot(
            i + 1,
            'A',
            "Available",
            "None"
        );
    }

    // Zone B Slot 11 - 20
    for (int i = 10; i < 20; i++)
    {
        slots[i] = parking_slot(
            i + 1,
            'B',
            "Available",
            "None"
        );
    }

    zones.addZone("Zone A");
    zones.addZone("Zone B");
}

void ParkingLot::displayParkingSlots()
{
    cout << "\n========== PARKING LOT ==========\n";

    for (int i = 0; i < 20; i++)
    {
        slots[i].displayParkingSlot();
        cout << "--------------------------\n";
    }
}

int ParkingLot::findAvailableSlot()
{
    for (int i = 0; i < 20; i++)
    {
        if (slots[i].getStatus() == "Available")
        {
            return i;
        }
    }

    return -1;
}

bool ParkingLot::parkVehicle(string plateNumber)
{
    int index = findAvailableSlot();

    if (index == -1)
    {
        return false;
    }

    slots[index].parkVehicle(plateNumber);

    cout << "Vehicle " << plateNumber
         << " parked in Slot "
         << slots[index].getSlotId()
         << " (Zone " << slots[index].getZone() << ")\n";

    return true;
}

bool ParkingLot::releaseSlot(string plateNumber)
{
    for (int i = 0; i < 20; i++)
    {
        if (slots[i].getVehiclePlate() == plateNumber)
        {
            slots[i].releaseSlot();

            cout << "Vehicle " << plateNumber
                 << " has left Slot "
                 << slots[i].getSlotId() << ".\n";

            return true;
        }
    }

    return false;
}

int ParkingLot::countAvailableSlots()
{
    int count = 0;

    for (int i = 0; i < 20; i++)
    {
        if (slots[i].getStatus() == "Available")
        {
            count++;
        }
    }

    return count;
}

void ParkingLot::displayZones()
{
    zones.displayZones();
}

void ParkingLot::nextZone()
{
    zones.nextZone();
}

void ParkingLot::previousZone()
{
    zones.previousZone();
}
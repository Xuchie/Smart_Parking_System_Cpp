#include <iostream>
#include <string>
#include "parkingSlot.h"

using namespace std;

parking_slot::parking_slot()
{
    Slot_Id = 0;
    zone = 'A';
    Slot_status = "Available";
    Vehicle_platnumber = "None";
}

parking_slot::parking_slot(int id, char zoneType, string status, string v_platnumber)
{
    Slot_Id = id;
    zone = zoneType;
    Slot_status = status;
    Vehicle_platnumber = v_platnumber;
}

void parking_slot::displayParkingSlot()
{
    cout << "Slot ID: " << Slot_Id << endl;
    cout << "Zone: " << zone << endl;
    cout << "Status: " << Slot_status << endl;
    cout << "Vehicle Plate: " << Vehicle_platnumber << endl;
}

int parking_slot::getSlotId()
{
    return Slot_Id;
}

char parking_slot::getZone()
{
    return zone;
}

string parking_slot::getStatus()
{
    return Slot_status;
}

string parking_slot::getVehiclePlate()
{
    return Vehicle_platnumber;
}

void parking_slot::parkVehicle(string plateNumber)
{
    Slot_status = "Occupied";
    Vehicle_platnumber = plateNumber;
}

void parking_slot::releaseSlot()
{
    Slot_status = "Available";
    Vehicle_platnumber = "None";
}
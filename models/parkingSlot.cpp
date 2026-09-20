#include <iostream>
#include <string>
#include "parkingSlot.h"

using namespace std;

parking_slot:: parking_slot(int id, char zoneType, string status, string v_platnumber){
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
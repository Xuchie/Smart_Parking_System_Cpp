
#include <iostream>
#include "parkingManager.h"

using namespace std;

ParkingManager::ParkingManager()
{
}

void ParkingManager::parkVehicle()
{
    int id;
    string plate;
    string model;

    cout << "\n========== PARK VEHICLE ==========\n";

    cout << "Enter Vehicle ID: ";
    cin >> id;

    cout << "Enter Plate Number: ";
    cin >> plate;

    cout << "Enter Vehicle Model: ";
    cin >> model;

    Vehicle_identification vehicle(id, plate, model);

    if (parkingLot.parkVehicle(vehicle.getPlateNumber()))
    {
        cout << "Vehicle parked successfully!\n";
    }
    else
    {
        cout << "Sorry, no available parking slot.\n";
    }
}

void ParkingManager::removeVehicle()
{
    string plate;

    cout << "\n========== REMOVE VEHICLE ==========\n";

    cout << "Enter Plate Number: ";
    cin >> plate;

    if (parkingLot.releaseSlot(plate))
    {
        cout << "Vehicle removed successfully!\n";
    }
    else
    {
        cout << "Vehicle not found.\n";
    }
}

void ParkingManager::findVehicle()
{
    string plate;

    cout << "\n========== FIND VEHICLE ==========\n";

    cout << "Enter Plate Number: ";
    cin >> plate;

    // Search functionality will be added later.
    cout << "Search for " << plate << " will be implemented next.\n";
}

void ParkingManager::displayParkingSlots()
{
    parkingLot.displayParkingSlots();
}

void ParkingManager::displayAvailableSlots()
{
    cout << "\nAvailable Slots: "
         << parkingLot.countAvailableSlots()
         << endl;
}

#include <iostream>
#include "parkingManager.h"
#include "../algorithms/search.h"
#include "../algorithms/sortingAlgo.h"

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
        cout << "Parking lot is full.\n";

        waitingQueue.enqueue(
            vehicle.getPlateNumber(),
            vehicle.getVehicleModel()
        );

        cout << "Vehicle added to waiting queue.\n";
    }
}

void ParkingManager::removeVehicle()
{
    string plate;

    cout << "\n========== EXIT VEHICLE ==========\n";

    cout << "Enter Plate Number: ";
    cin >> plate;

    if (parkingLot.releaseSlot(plate))
    {
        cout << "Vehicle exited successfully!\n";

        // Check waiting queue
        if (!waitingQueue.isEmpty())
        {
            string waitingPlate = waitingQueue.getFrontPlate();

            if (parkingLot.parkVehicle(waitingPlate))
            {
                cout << "Waiting vehicle "
                     << waitingPlate
                     << " has been parked.\n";

                waitingQueue.dequeue();
            }
        }
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

    int index = searchVehicle(
        parkingLot.getSlots(),
        20,
        plate
    );

    if (index != -1)
    {
        cout << "\nVehicle Found!\n";

        cout << "Slot ID: "
             << parkingLot.getSlots()[index].getSlotId()
             << endl;

        cout << "Zone: "
             << parkingLot.getSlots()[index].getZone()
             << endl;

        cout << "Plate Number: "
             << parkingLot.getSlots()[index].getVehiclePlate()
             << endl;
    }
    else
    {
        cout << "Vehicle not found.\n";
    }
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
void ParkingManager::sortParkingSlots()
{
    sortSlots(parkingLot.getSlots(), 20);

    cout << "\nParking slots sorted successfully!\n";
}

void ParkingManager::displayZones()
{
    parkingLot.displayZones();
}

void ParkingManager::nextZone()
{
    parkingLot.nextZone();
}

void ParkingManager::previousZone()
{
    parkingLot.previousZone();
}
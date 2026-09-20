// class of vehicle
#include <iostream>
#include <string>
#include "vehicles.h"

using namespace std;
/*/ Vehicle_identification::Vehicle_identification()
{

}*/

Vehicle_identification::Vehicle_identification(int id, string plate, string model_type)
{
    vehicleID = id;
    plateNumber = plate;
    vehicleModel = model_type;
}

void Vehicle_identification::displayInfo()
{
    cout << "Id: " << vehicleID << "\n";
    cout << "Plate: " << plateNumber << "\n";
    cout << "Model: " << vehicleModel << "\n";
}

string Vehicle_identification::getPlateNumber()
{
    return plateNumber;
}

int Vehicle_identification::getVehicleID()
{
    return vehicleID;
}
string Vehicle_identification::getVehicleModel()
{
    return vehicleModel;
}

// header
#include <iostream>
#include <string>

using namespace std;

class Vehicle_identification
{
private:
    int vehicleID;
    string plateNumber;
    string vehicleModel;

public:
    Vehicle_identification();
    Vehicle_identification(int id, string plate, string model_type);

    void displayInfo();

    string getPlateNumber();
    int getVehicleID();
    string getVehicleModel();
};
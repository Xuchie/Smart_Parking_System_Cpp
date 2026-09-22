#include "Search.h"

using namespace std;

int searchVehicle(parking_slot slots[], int size, string plateNumber)
{
    for (int i = 0; i < size; i++)
    {
        if (slots[i].getVehiclePlate() == plateNumber)
        {
            return i;
        }
    }

    return -1;
}
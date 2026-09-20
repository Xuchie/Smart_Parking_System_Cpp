#include <iostream>
#include <string>

using namespace std;

class parking_slot
{
private:
    int Slot_Id;
    char zone;
    string Slot_status;
    string Vehicle_platnumber;

public:
    parking_slot();
    parking_slot(int id, char zoneType, string status, string v_platnumber);

    void displayParkingSlot();
}
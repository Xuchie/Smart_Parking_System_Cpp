#include "sortingAlgo.h"

using namespace std;

void sortSlots(parking_slot slots[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (slots[j].getSlotId() > slots[j + 1].getSlotId())
            {
                parking_slot temp = slots[j];
                slots[j] = slots[j + 1];
                slots[j + 1] = temp;
            }
        }
    }
}
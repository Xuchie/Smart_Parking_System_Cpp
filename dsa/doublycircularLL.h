#ifndef DOUBLYCIRCULARLINKEDLIST_H
#define DOUBLYCIRCULARLINKEDLIST_H

#include <iostream>
#include <string>

using namespace std;

struct ZoneNode
{
    string zoneName;
    ZoneNode* next;
    ZoneNode* previous;

    ZoneNode(string name)
    {
        zoneName = name;
        next = nullptr;
        previous = nullptr;
    }
};

class DoublyCircularLinkedList
{
private:
    ZoneNode* head;

public:
    DoublyCircularLinkedList();

    void addZone(string zoneName);
    void displayZones();
    void nextZone();
    void previousZone();
};

#endif
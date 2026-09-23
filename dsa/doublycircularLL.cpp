#include "doublycircularLL.h"

using namespace std;

DoublyCircularLinkedList::DoublyCircularLinkedList()
{
    head = nullptr;
}

void DoublyCircularLinkedList::addZone(string zoneName)
{
    ZoneNode* newNode = new ZoneNode(zoneName);

    // If the list is empty
    if (head == nullptr)
    {
        head = newNode;

        head->next = head;
        head->previous = head;

        return;
    }

    // Find the last node
    ZoneNode* last = head->previous;

    newNode->next = head;
    newNode->previous = last;

    last->next = newNode;
    head->previous = newNode;
}

void DoublyCircularLinkedList::displayZones()
{
    if (head == nullptr)
    {
        cout << "No zones available.\n";
        return;
    }

    ZoneNode* current = head;

    do
    {
        cout << "Zone: " << current->zoneName << endl;
        current = current->next;

    } while (current != head);
}

void DoublyCircularLinkedList::nextZone()
{
    if (head == nullptr)
    {
        cout << "No zones available.\n";
        return;
    }

    head = head->next;

    cout << "Current Zone: "
         << head->zoneName << endl;
}

void DoublyCircularLinkedList::previousZone()
{
    if (head == nullptr)
    {
        cout << "No zones available.\n";
        return;
    }

    head = head->previous;

    cout << "Current Zone: "
         << head->zoneName << endl;
}
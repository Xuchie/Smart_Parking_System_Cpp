#include "Queue.h"

using namespace std;

Queue::Queue()
{
    front = nullptr;
    rear = nullptr;
}

bool Queue::isEmpty()
{
    return front == nullptr;
}

void Queue::enqueue(string plateNumber, string vehicleModel)
{
    QueueNode* newNode = new QueueNode(plateNumber, vehicleModel);

    if (rear == nullptr)
    {
        front = newNode;
        rear = newNode;
        return;
    }

    rear->next = newNode;// Add new vehicle to the rear
    rear = newNode;
}

void Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Waiting queue is empty.\n";
        return;
    }

    QueueNode* temp = front;

    cout << "Vehicle " << front->plateNumber
         << " is removed from the waiting queue.\n";

    front = front->next;

    // If queue becomes empty
    if (front == nullptr)
    {
        rear = nullptr;
    }

    delete temp;
}

void Queue::displayQueue()
{
    if (isEmpty())
    {
        cout << "No vehicles are waiting.\n";
        return;
    }

    QueueNode* current = front;

    cout << "\n========== WAITING VEHICLES ==========\n";

    while (current != nullptr)
    {
        cout << "--------------------------\n";
        cout << "Plate: " << current->plateNumber << endl;
        cout << "Model: " << current->vehicleModel << endl;
        cout << "--------------------------\n";

        current = current->next;
    }
}
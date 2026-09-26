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

    rear->next = newNode;
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

    front = front->next;

    if (front == nullptr)
    {
        rear = nullptr;
    }

    delete temp;
}

string Queue::getFrontPlate()
{
    if (isEmpty())
    {
        return "None";
    }

    return front->plateNumber;
}

string Queue::getFrontModel()
{
    if (isEmpty())
    {
        return "None";
    }

    return front->vehicleModel;
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
        cout << "Plate: " << current->plateNumber << endl;
        cout << "Model: " << current->vehicleModel << endl;
        cout << "--------------------------\n";

        current = current->next;
    }
}
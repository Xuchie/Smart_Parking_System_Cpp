#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <string>

using namespace std;

struct QueueNode
{
    string plateNumber;
    string vehicleModel;
    QueueNode* next;

    QueueNode(string plate, string model)
    {
        plateNumber = plate;
        vehicleModel = model;
        next = nullptr;
    }
};

class Queue
{
private:
    QueueNode* front;
    QueueNode* rear;

public:
    Queue();

    void enqueue(string plateNumber, string vehicleModel);
    void dequeue();

    string getFrontPlate();
    string getFrontModel();
    
    void displayQueue();
    bool isEmpty();
};

#endif
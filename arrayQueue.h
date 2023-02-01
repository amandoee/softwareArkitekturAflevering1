#pragma once
#include "queue.h"


//Integer array implementation of queue
class arrayQueue:public queue
{
private:

    int frontIndex;
    int backIndex;
    int size;

    bool isFull;

    int *queueElements;

public:

    void enqueue(int);
    int dequeue();
    bool empty();
    bool full();

    arrayQueue(int size);

};




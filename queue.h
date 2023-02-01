#pragma once

class queue
{
public:

    virtual void enqueue(int) = 0;
    virtual int dequeue() = 0;
    virtual bool empty() = 0;
    virtual bool full() = 0;
    
};

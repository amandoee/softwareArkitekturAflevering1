#pragma once
#include "queue.h"


//nodeclass for use in listqueue class





//Integer array implementation of queue
class listQueue:public queue
{
private:
    class node {
    public:
        node* next;
        int data;

        node(node*, int);
    };
    node *front;
    node *back;
    int size;

public:

    void enqueue(int);
    int dequeue();
    bool empty();
    bool full();

    listQueue();

};




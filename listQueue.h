#pragma once
#include "queue.h"


//nodeclass for use in listqueue class

class node {
public:
    node* next;
    int data;

    node(node*, int);
};



//Integer array implementation of queue
class listQueue:public queue
{
private:

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




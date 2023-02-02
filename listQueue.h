#pragma once
#include "queue.h"


//nodeclass for use in listqueue class



//Integer list implementation of queue. front/back pointers of custom type node for keeping track of queue.
class listQueue:public queue
{
private:

    //Use of node as class for easy implementation of linked list.
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
    ~listQueue();
};




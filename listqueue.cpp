#include "listQueue.h"
#include <iostream>
#include <assert.h>


int listQueue::dequeue() {

    //Prohibits users from dequeueing an empty queue.
    assert(!empty());

    //Saves appropiate value
    int popped = front->data;

    //Pointer to node being removed, for later deallocation
    node* temp = front;

    front=front->next;
    size--;

    delete temp;
    return popped;
}


void listQueue::enqueue(int x) {
    
    //If list is empty before calling enqueue, let new node be both front and back. Otherwise, add node as new back.
    if (empty()) {
        back=new node(NULL,x);
        front=back;
    } else {
        back->next=new node(NULL,x);
        back=back->next;
    }

    size++;
}

//Linked list can't really be full... 
bool listQueue::full() {
    return false;
}

bool listQueue::empty() {
    return (size==0);
}


//Initializes the listqueue with NULLpointers as front/back. Serves as an empty list (no elements in list).
listQueue::listQueue() {
    front=NULL;
    back=NULL;
    size=0;
}


//Lists through linked list, deallocating all nodes throughout.
listQueue::~listQueue() {
    node* temp = front;
    
    while (front!=NULL) {
        temp=front;
        front=front->next;
        delete temp;
    }
}


//Constructor for a new node with corrosponding data value and pointer to next node
listQueue::node::node(node* next,int value) : next(next), data(value) {}
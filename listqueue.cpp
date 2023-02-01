#include "listQueue.h"
#include <iostream>
#include <assert.h>


int listQueue::dequeue() {

    assert(!empty());
    int popped = front->data;
    node* temp = front;

    front=front->next;

    size--;

    return popped;
}

void listQueue::enqueue(int x) {
    
    if (empty()) {
        back=new node(NULL,x);
        front=back;
    } else {
        back->next=new node(NULL,x);
        back=back->next;
    }

    size++;
}

bool listQueue::full() {
    return false;
}

bool listQueue::empty() {
    return (size==0);
}

listQueue::listQueue() {
    front=NULL;
    back=NULL;
    size=0;
}


//Constructor for a new node with corrosponding data value and pointer to next node
node::node(node* next,int value) : next(next), data(value) {}
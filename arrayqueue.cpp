#include "arrayQueue.h"
#include <iostream>
#include <assert.h>

int arrayQueue::dequeue() {
    //For user trying to dequeue without any element in queue!
    assert(!empty());
    
    int popped = queueElements[frontIndex];
    frontIndex=(frontIndex+1)%(size-1);
    isFull=false;

    return popped;
}

void arrayQueue::enqueue(int x) {
    //For user trying to enqueue a full queue
    assert(!full());

    queueElements[backIndex]=x;
    backIndex=(backIndex+1)%(size-1);
    
    // Checks if the back index get moved onto the front index which means the queue is full 
    if (backIndex==frontIndex) {
        isFull=true;
    }
}

bool arrayQueue::full() {
    return isFull;
}

bool arrayQueue::empty() {
    if (!full() && frontIndex==backIndex) {
        return true;
    } else {
        return false;
    }
}

arrayQueue::arrayQueue(int size):size(size) {
    backIndex=0;
    frontIndex=0;
    isFull=false;
    queueElements = new int[size];
}

arrayQueue::~arrayQueue() {
    delete [] queueElements;
}
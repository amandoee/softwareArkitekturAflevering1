#include "arrayQueue.h"
#include <iostream>

int arrayQueue::dequeue() {
    //For user trying to dequeue without any element in queue
    if (empty()) {
        std::exit(1);
    }

    int popped = queueElements[frontIndex];
    frontIndex=(frontIndex+1)%(size-1);
    isFull=false;

    return popped;
}

void arrayQueue::enqueue(int x) {
    //For user trying to enqueue a full queue
    if (full()) {
        std::exit(1);
    }
    queueElements[backIndex]=x;
    backIndex=(backIndex+1)%(size-1);

    if (backIndex==frontIndex) {
        isFull=true;
    }
}

bool arrayQueue::full() {
    return isFull;
}

bool arrayQueue::empty() {
    if (isFull == false && frontIndex==backIndex) {
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
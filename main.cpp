#include <iostream>
#include "arrayQueue.h"
#include "listQueue.h"
#include "queue.h"

using namespace std;

//Testing of abstract functions
void simple(queue* parentClass) {
    parentClass->enqueue(69);
    cout<<parentClass->dequeue();
}


int main(int, char**) {
    
    arrayQueue sebberkarl(10);
    simple(&sebberkarl);


    listQueue sebberkarl2;
    simple(&sebberkarl2);

}
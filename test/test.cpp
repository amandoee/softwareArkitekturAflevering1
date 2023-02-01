#include "catch2/catch_all.hpp"
#include <iostream>
#include "arrayQueue.h"
#include "listQueue.h"

TEST_CASE("arrayQueue")
{
    arrayQueue testArrayQueue(10);
    
    //Tests if constructor marks queue as empty
    REQUIRE(testArrayQueue.empty());

    //enqueue test
    testArrayQueue.enqueue(69);
    testArrayQueue.enqueue(234);
    testArrayQueue.enqueue(0);

    REQUIRE(testArrayQueue.empty()==false);

    //dequeue test
    REQUIRE(testArrayQueue.dequeue()==69);
    REQUIRE(testArrayQueue.dequeue()==234);
    REQUIRE(testArrayQueue.dequeue()==0);

    REQUIRE(testArrayQueue.empty()==true);

}

TEST_CASE("listQueue")
{
    listQueue testListQueue;
    
    //Tests if constructor marks queue as empty
    REQUIRE(testListQueue.empty());

    //enqueue test
    testListQueue.enqueue(69);
    testListQueue.enqueue(234);
    testListQueue.enqueue(0);

    REQUIRE(testListQueue.empty()==false);

    //dequeue test
    REQUIRE(testListQueue.dequeue()==69);
    REQUIRE(testListQueue.dequeue()==234);
    REQUIRE(testListQueue.dequeue()==0);

    REQUIRE(testListQueue.empty()==true);

}


//Bonus testcase. Showcase of one use for abstract classes

    //Function for all inherited classes of queue
    void abstract_test(queue* q) {
    //Tests if constructor marks queue as empty
        q->enqueue(69);
        q->enqueue(234);
        q->enqueue(0);
    }

    TEST_CASE("Abstractified"){
        listQueue queue1;
        arrayQueue queue2(69);

        abstract_test(&queue1);
        abstract_test(&queue2);

        //listQueue tests
        REQUIRE(queue1.dequeue()==69);
        REQUIRE(queue1.dequeue()==234);
        REQUIRE(queue1.dequeue()==0);

        //arrayQueue tests
        REQUIRE(queue2.dequeue()==69);
        REQUIRE(queue2.dequeue()==234);
        REQUIRE(queue2.dequeue()==0);
    }


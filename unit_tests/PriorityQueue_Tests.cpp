
#define CATCH_CONFIG_MAIN
#include <iostream>
#include <istream>
#include <vector>
#include <algorithm>
#include <math.h>
#include "catch.hpp"
#include "../PriorityQueue.h"

using namespace std;

TEST_CASE("Size") {

    srand(time(NULL));

    PriorityQueue mylist;
    int numVals = rand() % 1000;
    for (int i = 0; i < numVals; i++) {
        int randVal = rand() % 100;
        mylist.Enqueue(randVal);
    }

    if (mylist.Size() != numVals) {
        INFO("Number of values does not match number of values enqueued.");
        INFO("..Actual Number of values enqueued: " << numVals);
        INFO("Reported number of values enqueued: " << mylist.Size());
        FAIL();
    }

}

TEST_CASE("Enqueue middle") {

    PriorityQueue mylist;
    vector<int> values;
    for (int i = 0; i < 5; i++) {
        mylist.Enqueue(i);
    }

    for (int i = 6; i < 10; i++) {
        mylist.Enqueue(i);
    }

    // Try to insert into the middle
    mylist.Enqueue(5);

    for (int i = 0; i < 10; i++) {
        int dequeuedValue = mylist.Dequeue();
        if (dequeuedValue != i) {
            INFO("Dequeued " << dequeuedValue);
            INFO("Expected " << values[i]);
            FAIL();
        }
    }
}

TEST_CASE("Enqueue Front") {

    PriorityQueue mylist;
    vector<int> values;
    for (int i = 0; i < 10; i++) {
        mylist.Enqueue(i);
    }

    // Try to insert onto front
    mylist.Enqueue(-1);

    for (int i = -1; i < 10; i++) {

        int dequeuedValue = mylist.Dequeue();
        if (dequeuedValue != i) {
            INFO("Dequeued " << dequeuedValue);
            INFO("Expected " << values[i]);
            FAIL();
        }

    }
}

TEST_CASE("Enqueue/Dequeue Stress Test") {

    srand(time(NULL));

    PriorityQueue mylist;
    vector<int> values;
    for (int i = 0; i < 100; i++)
    {
        int randVal = rand() % 100;
        values.push_back(randVal);
        mylist.Enqueue(randVal);
    }

    sort(values.begin(),values.end());
    int array[100];
    for (int i = 0; i <100; i++)
    {
        int dequeuedValue = mylist.Dequeue();
        if (dequeuedValue != values[i]) {
            INFO("Dequeued " << dequeuedValue);
            INFO("Expected " << values[i]);
            FAIL();
        }
    }
}

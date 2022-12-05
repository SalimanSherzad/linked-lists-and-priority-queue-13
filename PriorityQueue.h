#pragma once
#include <iostream>
using namespace std;

class PriorityQueue
{
public:
	PriorityQueue();
    //pre: this is a constructor there is no priority objects yet
    //post: this makes a priority queue object also initializes head to null and length to zero

	~PriorityQueue();
    //pre: the new operator is used with dynamic memory being used
    //post: the destructor deletes nodes one at a time using delete operator

	int Dequeue();
    //pre: there is a head node in our priority queue
    //post: establish the data of the first node, delete the node and update the head, return the value of the first node


	void Enqueue(int value);
    //pre: there is data that the function takes, it needs to be inserted as a node somewhere into priority queue
    //post: the node is inserted into corrected place in order of the priority queue based of the data of each node
	int Size();
    //pre: there is a variable: length counting the number of nodes in our linked list
    //post: this will return the length variable

private:
	struct Node
	{
		Node* next;
		int data;
	};

	Node* head;
	int length;
};


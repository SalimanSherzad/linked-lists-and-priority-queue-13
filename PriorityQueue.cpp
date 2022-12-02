
#include "PriorityQueue.h"

//Add your code for PriorityQueue.cpp here!
PriorityQueue::PriorityQueue() {
    head = NULL;
    length = 0;
}

PriorityQueue::~PriorityQueue() {
    while (head != NULL){
        Node* oldHead = head;
        head = head->next;
        delete oldHead;
        length--;
    }
}

int PriorityQueue::Dequeue() {
    int firstNodeVal = head->data;

    Node *temp = head;
    head = head->next;
    delete temp;
    length--;

    return firstNodeVal;

}

void PriorityQueue::Enqueue(int value) {

    Node *nodeToInsert = new Node;
    nodeToInsert->data = value;
    nodeToInsert->next = NULL;

    if (head == NULL){
        head = nodeToInsert;
        length++;
        return;
    }

    Node* current = head;
    Node* previous = nullptr;



    if (length == 1){
        if (head->data < nodeToInsert->data){
            head->next = nodeToInsert;
        }

        else {
            head = nodeToInsert;
            nodeToInsert->next = current;

        }
        length++;
        return;
    }
    current = current->next;
    previous = head;


    while (current != nullptr ){
         if (nodeToInsert->data == previous->data){
             nodeToInsert->next = current;
             previous->next= nodeToInsert;
             length++;
             return;
         }
         if ( nodeToInsert->data > previous->data and current->data > nodeToInsert->data ){
             nodeToInsert->next = current;
             previous->next= nodeToInsert;
             length++;
             return;
         }

         if (nodeToInsert->data < previous->data and length > 1){
             nodeToInsert->next = head;
             head = nodeToInsert;
             length++;
             return;
         }

         if (current->next == nullptr){
             current->next = nodeToInsert;
             length++;
             return;
         }


        previous = current;
        current = current->next;





    }







/*
    while (current->next != nullptr ){
        if (  current->data > nodeToInsert->data ){
            current->next = nodeToInsert;
            length++;
            return;
        }

        previous = current;
        current = current->next;





    }

    if (nodeToInsert->data < previous->data){
        nodeToInsert->next = head;
        head = nodeToInsert;
        length++;
        return;
    }

    if ( nodeToInsert->data > previous->data and current->data > nodeToInsert->data ){
        nodeToInsert->next = current;
        previous->next= nodeToInsert;
        length++;
        return;
    }

    if (nodeToInsert->data > current->data){
        nodeToInsert->next = nullptr;
        current->next = nodeToInsert;
    }
*/

}

int PriorityQueue::Size() {
    return length;
}

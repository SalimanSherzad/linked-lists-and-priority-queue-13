
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
    if (length == 1){
        if (head->data > nodeToInsert->data){
            head->next = nodeToInsert;
        }
        if (head->data > nodeToInsert->data){
            nodeToInsert->next = head;
        }
        return;
    }

    Node* current = head;
    Node* previous = nullptr;

    while (head != nullptr ){
         if (  nodeToInsert->data > previous->data and current->data > nodeToInsert->data ){
             break;
         }


        previous = current;
        current = current->next;

    }
    nodeToInsert->next = current;
    previous->next= nodeToInsert;
    


    while (current->next != nullptr){
        current = current->next;
    }

    current->next = nodeToInsert;


}

int PriorityQueue::Size() {
    return length;
}

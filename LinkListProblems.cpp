#include <iostream>

#ifndef LINKLISTPROBLEM
#define LINKLISTPROBLEM

using namespace std;

struct Node {
    int value;
    Node* next;
};


void PrintList(Node* list);
//Precondition: Node struct is declared and list is initialized
//Postcondition: Outputs contents of linked list to screen,
//with ->  between each node.

void Part1(Node* headptr);
//Precondition: Node struct is declared, Node type pointer headptr is declared
//Postcondition: initializes local headptr to point at a node containing value = 42
//and next pointing to null.

void Part2(Node*& headptr);
//Precondition: Node struct is declared, Node type pointer headptr is declared
//Postcondition: initializes headptr to point at a node containing value = 42
//and next pointing to null (uses pass by reference).

void Part3(Node*& list1head);
//Precondition: Node struct is declared, Node type pointer list1head is declared
//Postcondition: initializes list1head to contain two nodes containing 1 and 2
//and the second node's next pointing to null (uses pass by reference).

void Part4(Node*& list2head);
//Precondition: Node struct is declared, Node type pointer list2head is declared
//Postcondition: initializes list2head to contain two nodes containing 3 and 4
//and the second node's next pointing to null (uses pass by reference).

void Part5(Node*& list1head, Node*& list2head);
//Precondition: Node struct is declared, Node type pointers list1head and list2head are declared
//Postcondition: Updates list1head to have two nodes, containing 1 and 4 respectively, and second node pointing to null.
//Updates list2head to have two nodes, containing 2 and 3 respectively, and second node pointing to null
//(uses pass by reference).

#ifndef CATCH_CONFIG_MAIN // Do not remove

int main() {
    Node* head = nullptr;
    Node* list1 = nullptr;
    Node* list2 = nullptr;

    cout << "Part 1" << endl;
    Part1(head);
    if (head != nullptr) {
        cout << "head->value " << head->value;
    } else {
        cout << "head is still null";
    }
    cout << endl << endl;

    cout << "Part 2" << endl;
    Part2(head);
    cout << "head->";
    PrintList(head);
    cout << endl;


    cout << "Part 3" << endl;
    Part3(list1);
    cout << "list1->";
    PrintList(list1);
    cout << endl;

    cout << "Part 4" << endl;
    Part4(list2);
    cout << "list2->";
    PrintList(list2);
    cout << endl;

    cout << "Part 5" << endl;
    Part5(list1, list2);

    cout << "list1->";
    PrintList(list1);
    cout << "list2->";
    PrintList(list2);
    cout << endl;

}

#endif

void Part1(Node* headptr) {

    headptr = new Node;
    headptr->value = 42;
    headptr->next = nullptr;

    //For part 1, answer the following question:
    //Why is head still pointing to null after the Part1 function is called?
    //(hint: compare the arguments and preconditions+postconditions for Part1 and Part2)

    //write your answer for Part1 here
    // we need to use pass by reference
}

void Part2(Node*& headptr) {


    //Write your code for Part2 here
    headptr = new Node;
    headptr->value = 42;
    headptr->next = nullptr;
}

void Part3(Node*& list1head) {
   

    //Write your code for Part3 here
    list1head = new Node;
    list1head->value = 1;
    list1head->next = new Node;
    list1head->next->value = 2;
    list1head->next->next = NULL;


}

void Part4(Node*& list2head) {
 

    //Write your code for Part4 here
    list2head = new Node;
    list2head->value = 3;
    list2head->next = new Node;
    list2head->next->value = 4;
    list2head->next->next = NULL;


}

void Part5(Node*& list1head, Node*& list2head) {
 

    //Write your code for Part5 here
    list1head = new Node;
    list1head->value = 4;
    list1head->next = new Node;
    list1head->next->value = 1;
    list1head->next->next = NULL;

    list2head = new Node;
    list2head->value = 2;
    list2head->next = new Node;
    list2head->next->value = 3;
    list2head->next->next = NULL;



}

//PrintList is given.  You do not need to modify this function.
void PrintList(Node* list) {
    Node* curr = list;
    while (curr != nullptr) {
        cout << curr->value;
        cout << "->";
        curr = curr->next;
    }
    cout << "nullptr" << endl;
}

#endif


#define CATCH_CONFIG_MAIN
#include <iostream>
#include <istream>
#include <math.h>
#include "catch.hpp"
#include "../LinkListProblems.cpp"

using namespace std;

//TEST_CASE("Part 1") {
//    Node* head = nullptr;
//    Part1(head);
//    if (head->value != 42) {
//        INFO("Node does not store 42");
//        FAIL();
//    }
//}

TEST_CASE("Part 2") {
    Node* head = nullptr;
    Part2(head);
    if (head->value != 42) {
        INFO("Node does not store 42");
        FAIL();
    }
}

TEST_CASE("Part 3") {

    Node* head = nullptr;
    Part3(head);
    if (head->value != 1) {
        INFO("First node does not store 1");
        FAIL();
    }

    if (head->next->value != 2) {
        INFO("Second node does not store 2");
        FAIL();
    }

    if (head->next->next != nullptr) {
        INFO("Last node does not point to nullptr");
        FAIL();
    }

}

TEST_CASE("Part 4") {

    Node* head = nullptr;
    Part4(head);
    if (head->value != 3) {
        INFO("First node does not store 3");
        FAIL();
    }

    if (head->next->value != 4) {
        INFO("Second node does not store 4");
        FAIL();
    }

    if (head->next->next != nullptr) {
        INFO("Last node does not point to nullptr");
        FAIL();
    }

}

TEST_CASE("Part 5") {

    Node* list1 = nullptr;
    Node* list2 = nullptr;

    Node* head = new Node;
    Node* tmp = head;

    for (int i = 1; i <= 4; i++) {
        tmp->value = i;
        if (i == 4) {
            tmp->next = nullptr;
            break;
        }
        tmp->next = new Node;

        tmp = tmp->next;
    }
    list1 = head;
    list2 = head->next->next;
    list1->next->next = nullptr;

    Part5(list1, list2);
    if (list1->value != 4 or list1->next->value != 1 or list1->next->next != nullptr) {
        INFO("list1 should store 4->1->nullptr");
        INFO(list1->value << "->" << list1->next->next->value);
        FAIL();
    }

    if (list2->value != 2 or list2->next->value != 3 or list2->next->next != nullptr) {
        INFO("list1 should store 2->3->nullptr");
        INFO(list2->value << "->" << list2->next->next->value);
        FAIL();
    }

}
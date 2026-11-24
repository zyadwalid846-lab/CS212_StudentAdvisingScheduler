#pragma once
#ifndef ADVISOR_LINKED_LIST_H
#define ADVISOR_LINKED_LIST_H

#include "Models.h"
#include <iostream>
using namespace std;


struct AdvisorNode {
    Advisor data;
    AdvisorNode* next;
};

class AdvisorLinkedList {
private:
    AdvisorNode* head;

public:
    AdvisorLinkedList();
    ~AdvisorLinkedList();

    
    void insertAdvisor(Advisor newAdvisor);
    bool deleteAdvisor(int advisorID);
    Advisor* searchAdvisor(int advisorID);
    void displayAdvisors();
    bool isEmpty();
};

#endif
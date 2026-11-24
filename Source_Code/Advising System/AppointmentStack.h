#pragma once
#ifndef APPOINTMENT_STACK_H
#define APPOINTMENT_STACK_H

#include "Models.h"
#include <iostream>
using namespace std;


struct StackNode {
    ActionLog data;
    StackNode* next;
};

class AppointmentStack {
private:
    StackNode* topPtr;
    int count;

public:
    AppointmentStack();
    ~AppointmentStack();

    
    void push(ActionLog action);
    bool pop(ActionLog& poppedAction);
    bool peek(ActionLog& topAction);
    bool isEmpty();
    int size();
};

#endif
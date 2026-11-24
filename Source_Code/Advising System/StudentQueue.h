#pragma once
#ifndef STUDENT_QUEUE_H
#define STUDENT_QUEUE_H

#include "Models.h"
#include <iostream>
using namespace std;


struct QueueNode {
    Student data;
    QueueNode* next;
};

class StudentQueue {
private:
    QueueNode* frontPtr;
    QueueNode* rearPtr;
    int count;

public:
    StudentQueue();
    ~StudentQueue();

    
    void enqueue(Student s);
    bool dequeue(Student& removedStudent); 
    bool front(Student& frontStudent);     
    bool isEmpty();
    int size();
    void displayQueue();
};

#endif
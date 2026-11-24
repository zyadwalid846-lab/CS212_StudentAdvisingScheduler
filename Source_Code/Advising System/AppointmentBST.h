#pragma once
#ifndef APPOINTMENT_BST_H
#define APPOINTMENT_BST_H

#include "Models.h"
#include <iostream>
using namespace std;


struct BSTNode {
    Appointment data;
    BSTNode* left;
    BSTNode* right;
};

class AppointmentBST {
private:
    BSTNode* root;

    
    BSTNode* insertHelper(BSTNode* node, Appointment appt, bool& inserted);
    BSTNode* searchHelper(BSTNode* node, int apptID);
    void inorderHelper(BSTNode* node);
    void preorderHelper(BSTNode* node);
    BSTNode* deleteHelper(BSTNode* node, int apptID, bool& deleted);
    BSTNode* findMin(BSTNode* node);
    void destroyTree(BSTNode* node);

public:
    AppointmentBST();
    ~AppointmentBST();

    
    bool insert(Appointment appt);       //If ID duplicate return false
    Appointment* search(int apptID);
    void inorderTraversal();
    void preorderTraversal();
    bool deleteNode(int apptID);
    bool isEmpty();
};

#endif
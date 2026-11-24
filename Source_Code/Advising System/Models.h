#pragma once
#ifndef MODELS_H
#define MODELS_H

#include <string>
using namespace std;


struct Student {
    int studentID;  //Unique key     
    string name;
    string department;
    int academicYear;
};


struct Advisor {
    int advisorID;  // Unique key
    string name;
    string officeHours;
    int maxCapacity;
    int assignedCount;
};


struct Appointment {
    int appointmentID;  // BST Key
    int studentID;
    int advisorID;
    string date;         
    string timeSlot;     
    string status;       
};

struct ActionLog {
    string actionType;           
    Appointment appointmentData; 
};

#endif
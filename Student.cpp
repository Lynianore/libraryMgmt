//
// Created by Lynianore on 07/12/2025.
//

#include "Student.h"
using namespace std;

//Constructor
Student::Student(string name, string ID) : User(name, ID) {
    this->name = name;
    this->ID = ID;
    this->borrowLimit = 4;
}
void Student::getOverview() {
    cout << "\nStudent name: " << name;
    cout << "\nStudent ID number: " << ID << endl;
}
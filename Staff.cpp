//
// Created by angel on 07/12/2025.
//

#include "Staff.h"
using namespace std;

//Constructor
Staff::Staff(string name, string ID) : User(name, ID) {
    this->name = name;
    this->ID = ID;
    this->borrowLimit = 10;
}
void Staff::getOverview() {
    cout << "\nStaff name: " << name;
    cout << "\nStaff ID number: " << ID << endl;
}
void Staff::addItem(System& system, Item* item) {
    cout << endl << getName() << " added " << item->getTitle() << endl;
    system.addItem(item);
}



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
    //Calls addItem with the given item via the given system and reports it in the console
    cout << endl << getName() << " added " << item->getTitle() << endl;
    system.addItem(item);
}
//Removes item from library system (completely if only one remains, or decrements copies by 1 if removing is successful)
void Staff::removeItem(System& system, const string& itemID) {
    if (system.removeItem(itemID, 1)) {
        Item* item = system.findItem(itemID);
        if (item) {
            cout << getName() << " removed one copy of " << item->getTitle() << endl;
        } else {
            cout << getName() << " removed " << item->getTitle() << endl;
        }
    }
}




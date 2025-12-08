//
// Created by Lynianore on 24/11/2025.
//

#include "System.h"
using namespace std;

//Constructor
System::System() {}

//Adds item pointers to vector
void System::addItem(Item* item) {
    //Checks if item is already presents, increases number of copies and deletes the item it would've added otherwise,
    //returns to terminate function
    for (auto& it : items) {
        if (it->getID() == item->getID()) {
            it->addCopies(item->getCopiesAvailable());
            delete item;
            return;
        }
    }
    //If item isn't already present simply adds item to vector
    items.push_back(item);
}

//Removes num items with the ID given with itemID by iterating through all items and comparing their IDs to the ID
//reference given in the argument
bool System::removeItem(const string& itemID, int num) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        Item* item = *it;
        if (item->getID() == itemID) {
            //If the item exists but no copies are available then they must be currently borrowed by a user, who must
            //return false it before it's removed from the system
            if (item->getCopiesAvailable() == 0) {
                cout << "\nAll copies are currently being borrowed\n";
                return false;
            }
            //If only one total copy remains (given that it's not being borrowed as is checked by the above if statement)
            //erases that item and returns false to indicate that the item could not be successfully added
            if (item->getCopiesTotal() == 1) {
                items.erase(it);
                return false;
            }
            //If there are available copies but more than one then we just decrement the total copies by 1 and return true
            item->removeCopies(1);
            return true;
        }
    }
    //If no item matches the given ID then we return false
    cout << "\nNo item found with ID " << itemID << endl;
    return false;
}

//Getter for all items in library
vector<Item*>& System::getItems() {
    return items;
}

//Calls getOverview for every item in the items vector if any exist
void System::listItems() {
    if (items.empty()) {
        cout << "\nNo items in the library.\n";
    }
    cout << "\nItems in library:\n";
    for (auto* item : items) {
        item->getOverview();
    }
}

//Finds item with given ID, returns null if none are found
Item* System::findItem(const string& itemID) {
    for (auto* item : items) {
        if (item->getID() == itemID)
            return item;
    }
    return nullptr;
}

//Adds User object pointer to users vector
void System::addUser(User* user) {
    for (auto& us : users) {
        if (us->getName() == user->getName()) {
            delete user;
            cout << "\n User already exists\n";
            return;
        }
    }
    users.push_back(user);
}

//Returns any user that matches the given ID
User* System::findUser(const string& id) {
    for (auto* user : users) {
        if (user->getID() == id)
            return user;
    }
    return nullptr;
}
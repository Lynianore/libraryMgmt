//
// Created by Lynianore on 24/11/2025.
//

#include "System.h"
using namespace std;

System::System() {}
//Adds item pointers to vector
void System::addItem(Item* item) {
    //Checks if item is already presents, increases number of copies and deletes the item it would've added otherwise
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

bool System::removeItem(const string& itemID, int num) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        Item* item = *it;
        if (item->getID() == itemID) {
            if (item->getCopiesAvailable() == 0) {
                cout << "\nAll copies are currently being borrowed\n";
                return false;
            }
            if (item->getCopiesTotal() == 1) {
                items.erase(it);
                return false;
            }
            item->removeCopies(1);
            return true;
        }
    }
    cout << "\nNo item found with ID " << itemID << endl;
    return false;
}

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

User* System::findUser(const string& id) {
    for (auto* user : users) {
        if (user->getID() == id)
            return user;
    }
    return nullptr;
}

Item* System::findItem(const string& itemID) {
    for (auto* item : items) {
        if (item->getID() == itemID)
            return item;
    }
    return nullptr;
}

//Getter for all items in library
vector<Item*>& System::getItems() {
    return items;
}

void System::listItems() {
    if (items.empty()) {
        cout << "\nNo items in the library.\n";
    }

    cout << "\nItems in library:\n";
    for (auto* item : items) {
        item->getOverview();
    }
}
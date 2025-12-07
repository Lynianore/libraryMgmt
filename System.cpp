//
// Created by Lynianore on 24/11/2025.
//

#include "System.h"
#include <vector>
#include <algorithm>
using namespace std;

System::System() {}
//Adds item pointers to vector
void System::addItem(Item* item) {
    //Checks if item is already presents, increases number of copies and deletes the item it would've added otherwise
    for (auto& it : items) {
        if (it->getTitle() == item->getTitle()) {
            it->addCopies(item->getCopiesAvailable());
            delete item;
            return;
        }
    }
    //If item isn't already pressent simply adds item to vector
    items.push_back(item);
}

User* System::findUser(string& id) {
    for (auto* user : users) {
        if (user->getID() == id)
            return user;
    }
    return nullptr;
}

Item* System::findItem(string& id) {
    for (auto* item : items) {
        if (item->getID() == id)
            return item;
    }
    return nullptr;
}

void System::borrowItem(string& userID, string& itemID) {
    User* user = findUser(userID);
    Item* item = findItem(itemID);

    if (!user || !item) {
        cout << endl << "Item or user does not exist." << endl;
    } if (item->getCopiesAvailable() < 1) {
        cout << endl << "No available copies of item." << endl;
    } if (!user->canBorrow()) {
        cout << endl << "User has reached borrowing limit" << endl;
    }
    user->borrow(item);
    item->borrowCopy();
}

//Getter for all items in library
std::vector<Item*>& System::getItems() {
    return items;
}
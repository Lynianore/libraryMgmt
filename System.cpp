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
        if (it->getTitle() == item->getTitle()) {
            it->addCopies(item->getCopiesAvailable());
            delete item;
        }
    }
    //If item isn't already pressent simply adds item to vector
    items.push_back(item);
}

void System::addUser(User* user) {
    for (auto& us : users) {
        if (us->getName() == user->getName()) {
            delete user;
        }
    }
    users.push_back(user);
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
        cout << "\nItem or user does not exist.\n";
    } if (item->getCopiesAvailable() < 1) {
        cout << "\nNo available copies of item.\n";
    } if (!user->canBorrow()) {
        cout << "\nUser has reached borrowing limit\n";
    }
    user->borrow(item);
    item->borrowCopy();
}

//Getter for all items in library
std::vector<Item*>& System::getItems() {
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
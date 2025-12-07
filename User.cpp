//
// Created by Lynianore on 04/12/2025.
//

#include "User.h"
#include "System.h"

using namespace std;

User::User(string name, string ID) {
    this->name = name;
    this->ID = ID;
    this->borrowLimit = borrowLimit;
}

string User::getName() {
    return name;
}

string User::getID() {
    return ID;
}

vector<Item*>& User::getBorrowedItems() {
    return borrowedItems;
}

bool User::canBorrow() {
    return borrowedItems.size() < borrowLimit;
}
void User::borrow (System& system, const string& itemID) {
    Item* item = system.findItem(itemID);
    if (!item) {
        std::cout << "\nItem not found.\n";
        return;
    }

    if (!canBorrow()) {
        std::cout << name << " has reached borrow limit.\n";
        return;
    }

    if (item->getCopiesAvailable() < 1) {
        std::cout << "\nNo available copies of " << item->getTitle() << endl;
        return;
    }
    borrowedItems.push_back(item);
    item->borrowCopy();
    std::cout << endl << name << " borrowed " << item->getTitle() << std::endl;
}

Item* User::findBorrowedItem(const string& itemID) {
    for (auto* item : borrowedItems) {
        if (item->getID() == itemID)
            return item;
    }
    return nullptr;
}

void User::returnItem(System& system, const std::string& itemID) {
    // Find the item in the user's borrowed list
    Item* item = findBorrowedItem(itemID);
    if (!item) {
        std::cout << "\nNo item with the ID " << itemID << " has been borrowed by " << name;
        return;
    }

    // Remove item from borrowedItems vector
    auto it = std::find(borrowedItems.begin(), borrowedItems.end(), item);
    if (it != borrowedItems.end()) {
        borrowedItems.erase(it);
    }
    item->returnCopy();
    std::cout << name << " returned " << item->getTitle() << std::endl;
}

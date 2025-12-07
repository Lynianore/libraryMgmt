//
// Created by Lynianore on 04/12/2025.
//

#include "User.h"

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
void User::borrow (Item* item) {
    if (canBorrow()) {
        borrowedItems.push_back(item);
    }
}

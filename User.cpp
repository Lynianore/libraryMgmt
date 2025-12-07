//
// Created by Lynianore on 04/12/2025.
//

#include "User.h"
#include "Item.h"
#include <iostream>
using namespace std;

User::User(string name, string ID) {
    this->name = name;
    this->ID = ID;
    this->borrowLimit = borrowLimit;
}
bool User::canBorrow() {
    return borrowedItems.size() < borrowLimit;
}
void borrow (Item* item) {
    if (canBorrow())
}

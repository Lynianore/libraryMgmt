//
// Created by Lynianore on 04/12/2025.
//

#include "User.h"
#include "System.h"

using namespace std;

//Constructor
User::User(string name, string ID) {
    this->name = name;
    this->ID = ID;
    this->borrowLimit = borrowLimit;
}

//Getters for name and ID
string User::getName() {
    return name;
}
string User::getID() {
    return ID;
}
//Getter for vector of borrowed Item pointers
vector<Item*>& User::getBorrowedItems() {
    return borrowedItems;
}
//Bool method which returns true if they haven't met their borrowing limit
bool User::canBorrow() {
    return borrowedItems.size() < borrowLimit;
}
//Method which borrows the item with the given ID via the given system
void User::borrow (System& system, const string& itemID) {
    //Pointer to the relevant item if it exists
    Item* item = system.findItem(itemID);
    if (!item) {
        //Returns if no such item exists
        cout << "\nItem not found.\n";
        return;
    }
    //Returns if the user has met their borrowing limit
    if (!canBorrow()) {
        cout << name << " has reached borrow limit.\n";
        return;
    }
    //Returns if All copies are currently borrowed
    if (item->getCopiesAvailable() < 1) {
        cout << "\nNo available copies of " << item->getTitle() << endl;
        return;
    }
    //If borrowing is possible the item is added to the users borrowed items vector and its borrowedCopies variable
    //is incremented
    borrowedItems.push_back(item);
    item->borrowCopy();
    cout << endl << name << " borrowed " << item->getTitle() << endl;
}

//Returns the item with the given ID through the given system
void User::returnItem(System& system, const string& itemID) {
    // Find the item in the user's borrowed list
    Item* item = findBorrowedItem(itemID);
    //Returns if no such item exists
    if (!item) {
        cout << "\nNo item with the ID " << itemID << " has been borrowed by " << name;
        return;
    }
    // Remove item from borrowedItems vector
    auto it = find(borrowedItems.begin(), borrowedItems.end(), item);
    if (it != borrowedItems.end()) {
        //Erases the iterator from the vector of borrowed Item pointers
        borrowedItems.erase(it);
    }
    //Increases the number of available copies by 1
    item->returnCopy();
    cout << endl << name << " returned " << item->getTitle() << endl;
}

//Finds item in borrowedItem vector whose ID matches the one given in the argument
Item* User::findBorrowedItem(const string& itemID) {
    for (auto* item : borrowedItems) {
        if (item->getID() == itemID)
            return item;
    }
    return nullptr;
}
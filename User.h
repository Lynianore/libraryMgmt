//
// Created by Lynianore on 04/12/2025.
//

#ifndef LIBRARYMANAGEMENT_USER_H
#define LIBRARYMANAGEMENT_USER_H
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include "Item.h"
class System;

class User {
public:
    //Constructor
    User(std::string, std::string);
    //Virtual destructor
    virtual ~User(){};
    //Prints overview, pure virtual method makes base class abstract
    virtual void getOverview() = 0;
    //Getter for protected variables
    std::string getName();
    std::string getID();

    //Getter for if user can borrow and for the vector of borrowed items
    bool canBorrow();
    std::vector<Item*>& getBorrowedItems();
    //Adds item to borrowedItems vector
    void borrow(System& system, const std::string& itemID);
    //Removes items from the borrowedItems vector
    void returnItem(System& system, const std::string& itemID);
    //Finds item in borrowedItem vector whose ID matches the one given in the argument
    Item* findBorrowedItem(const std::string& itemID);



    //Virtual functions which will only be usable by staff to add or remove items
    virtual void addItem(System&, Item*) {};
    virtual void removeItem(System&, const std::string& itemID) {};

    protected:
    std::string name;
    std::string ID;
    int borrowLimit;

    private:
    std::vector<Item*> borrowedItems;
};


#endif //LIBRARYMANAGEMENT_USER_H
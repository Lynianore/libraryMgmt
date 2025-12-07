//
// Created by Lynianore on 04/12/2025.
//

#ifndef LIBRARYMANAGEMENT_USER_H
#define LIBRARYMANAGEMENT_USER_H
#include <string>
#include <vector>
#include <iostream>
#include "Item.h"
class System;

class User {
public:
    //constructor
    User(std::string, std::string);
    //virtual destructor
    virtual ~User(){};
    //prints overview, pure virtual method makes base class abstract
    virtual void getOverview() = 0;
    //getter for protected variables
    std::string getName();
    std::string getID();

    std::vector<Item*>& getBorrowedItems();

    //Getter for if user can borrow
    bool canBorrow();
    //Adds item to borrowedItems vector
    void borrow (Item* item);
    virtual void addItem(System&, Item*) {};

    protected:
    std::string name;
    std::string ID;
    int borrowLimit;

    private:
    std::vector<Item*> borrowedItems;
};


#endif //LIBRARYMANAGEMENT_USER_H
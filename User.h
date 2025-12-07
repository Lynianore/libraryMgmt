//
// Created by Lynianore on 04/12/2025.
//

#ifndef LIBRARYMANAGEMENT_USER_H
#define LIBRARYMANAGEMENT_USER_H
#include <string>
#include <vector>
#include "Item.h"

class User {
public:
    //constructor
    User(std::string, std::string);
    //virtual destructor
    virtual ~User();
    //prints overview, pure virtual method makes base class abstract
    virtual void getOverview() = 0;

    std::string getName();

    std::string getID();
    //getter for if borrowing is possible
    bool canBorrow();

    void borrow (Item* item);

    protected:
    std::string name;
    std::string ID;
    std::vector<Item*> borrowedItems;

    private:
    int borrowLimit;
};


#endif //LIBRARYMANAGEMENT_USER_H
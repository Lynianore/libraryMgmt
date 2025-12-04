//
// Created by Lynianore on 04/12/2025.
//

#ifndef LIBRARYMANAGEMENT_USER_H
#define LIBRARYMANAGEMENT_USER_H
#include <string>
#include <vector>

class User {
    public:
    //constructor
    User(std::string, std::string);
    //virtual destructor
    virtual ~User();
    //prints overview
    virtual void getOverview() = 0;
    //pure virtual method makes base class abstract
    virtual int getBorrowLimit() = 0;
    //getter for if borrowing is possible
    void canBorrow();

    protected:
    std::string name;
    std::string ID;
    std::vector<std::string> borrowedItems;

    private:
    int borrowLimit;
};


#endif //LIBRARYMANAGEMENT_USER_H
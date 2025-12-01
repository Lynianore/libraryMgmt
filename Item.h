//
// Created by Lynianore on 18/11/2025.
//

#ifndef LIBRARYMANAGEMENT_ITEM_H
#define LIBRARYMANAGEMENT_ITEM_H
#include <iostream>

class Item {
    public:
    //Constructor
    Item(std::string, std::string, int, std::string, int);
    //Virtual destructor
    virtual ~Item() {};

    //Add num copies of item
    void addCopies(int num);

    //Pure virtual function makes base class abstract
    virtual void getOverview() = 0;

    //Returns title of item
    std::string getTitle();

    //Returns copies available of item
    int getCopiesAvailable();

    protected:
    std::string title;
    std::string author;
    int length;
    //Dewey Decimal ID, type is string so that it retains zeros at the start
    std::string ID;
    int copies;
    int copiesAvailable;

    private:
    int timesBorrowed;
    int copiesBorrowed;

};


#endif //LIBRARYMANAGEMENT_ITEM_H
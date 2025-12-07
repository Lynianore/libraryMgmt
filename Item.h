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

    //Pure virtual function makes base class abstract, different items print their overview differently
    virtual void getOverview() = 0;

    //getters for variables
    std::string getTitle();
    std::string getAuthor();
    int getLength();
    std::string getID();
    int getCopiesTotal();
    int getCopiesAvailable();

    //Add num copies of item
    void addCopies(int num);
    void removeCopies(int num);
    //Reduces available copies by 1, called by System when a book is borrowed
    void borrowCopy();
    void returnCopy();

    protected:
    std::string title;
    std::string author;
    int length;
    //Dewey Decimal ID, type is string so that it retains zeros at the start
    std::string ID;
    int copies;

    private:
    int timesBorrowed;
    int copiesBorrowed;

};


#endif //LIBRARYMANAGEMENT_ITEM_H
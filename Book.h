//
// Created by Lynianore on 18/11/2025.
//

#ifndef LIBRARYMANAGEMENT_BOOK_H
#define LIBRARYMANAGEMENT_BOOK_H
#include "Item.h"

class Book : public Item {
    public:
    //constructor
    Book(std::string, std::string, int, std::string, int);
    //Prints overview of book
    void getOverview();
};


#endif //LIBRARYMANAGEMENT_BOOK_H
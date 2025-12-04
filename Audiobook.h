//
// Created by Lynianore on 04/12/2025.
//

#ifndef LIBRARYMANAGEMENT_AUDIOBOOK_H
#define LIBRARYMANAGEMENT_AUDIOBOOK_H
#include "Item.h"

class Audiobook : public Item {
public:
    //constructor
    Audiobook(std::string, std::string, int, std::string, int);
    //Prints overview of Audiobook
    void getOverview();
};

#endif //LIBRARYMANAGEMENT_AUDIOBOOK_H
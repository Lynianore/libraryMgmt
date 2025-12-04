//
// Created by Lynianore on 04/12/2025.
//

#ifndef LIBRARYMANAGEMENT_DVD_H
#define LIBRARYMANAGEMENT_DVD_H
#include "Item.h"

class DVD : public Item {
    public:
    //constructor
    DVD(std::string, std::string, int, std::string, int);
    //Prints overview of DVD
    void getOverview();
};


#endif //LIBRARYMANAGEMENT_DVD_H
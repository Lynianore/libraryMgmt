//
// Created by angel on 07/12/2025.
//

#ifndef LIBRARYMANAGEMENT_STAFF_H
#define LIBRARYMANAGEMENT_STAFF_H
#include "User.h"
#include "system.h"
class Staff : public User {
    public:
    //Constructor
    Staff(std::string, std::string);
    //Prints an overview
    void getOverview();
    //Adds item to library system
    void addItem(System& system, Item* item);
    //Removes item from library system
    void removeItem(System& system, const std::string& itemID);
};


#endif //LIBRARYMANAGEMENT_STAFF_H
//
// Created by angel on 07/12/2025.
//

#ifndef LIBRARYMANAGEMENT_STAFF_H
#define LIBRARYMANAGEMENT_STAFF_H
#include "User.h"
#include "system.h"
class Staff : public User {
    public:
    Staff(std::string, std::string);
    void getOverview();
    void addItem(System& system, Item* item);
    void removeItem(System& system, const std::string& itemID);
};


#endif //LIBRARYMANAGEMENT_STAFF_H
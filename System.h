//
// Created by Lynianore on 24/11/2025.
//

#ifndef LIBRARYMANAGEMENT_SYSTEM_H
#define LIBRARYMANAGEMENT_SYSTEM_H

#include <vector>
#include "item.h"
#include "user.h"

class System {
    public:
    //Constructor
    System();

    //Adds Item object pointer to items vector
    void addItem(Item* item);

    //Returns vector of item pointers
    std::vector<Item*>& getItems();

    User* findUser(std::string& ID);
    Item* findItem(std::string& ID);

    void borrowItem(std::string& userID, std::string& itemID);

    private:
    // Vector of pointers to Item objects
    std::vector<Item*> items;
    std::vector<User*> users;
};


#endif //LIBRARYMANAGEMENT_SYSTEM_H
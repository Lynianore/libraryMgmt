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
    void addUser(User* user);
    //Returns vector of item pointers
    std::vector<Item*>& getItems();
    void listItems();

    User* findUser(const std::string& ID);
    Item* findItem(const std::string& ID);

    void borrowItem(const std::string& userID, const std::string& itemID);

    private:
    // Vector of pointers to Item objects
    std::vector<Item*> items;
    std::vector<User*> users;
};


#endif //LIBRARYMANAGEMENT_SYSTEM_H
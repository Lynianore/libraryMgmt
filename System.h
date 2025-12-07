//
// Created by Lynianore on 24/11/2025.
//

#ifndef LIBRARYMANAGEMENT_SYSTEM_H
#define LIBRARYMANAGEMENT_SYSTEM_H

#include <vector>
#include "Item.h"
#include "User.h"

class System {
    public:
    //Constructor
    System();

    //Adds Item object pointer to items vector
    void addItem(Item* item);
    bool removeItem(const std::string& id, int num);
    void addUser(User* user);
    //Returns vector of item pointers
    std::vector<Item*>& getItems();
    void listItems();

    User* findUser(const std::string& ID);
    Item* findItem(const std::string& ID);

    private:
    // Vector of pointers to Item objects
    std::vector<Item*> items;
    std::vector<User*> users;
};


#endif //LIBRARYMANAGEMENT_SYSTEM_H
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

    //Add/remove Item object pointer to/from the items vector
    void addItem(Item* item);
    bool removeItem(const std::string& id, int num);
    //Returns the item with the inputted Dewey Decimal ID given in the argument, or nothing if one doesn't exist
    Item* findItem(const std::string& ID);

    //Add User pointer to users vector and return the user that has the user ID given in the argument
    void addUser(User* user);
    User* findUser(const std::string& ID);
    //Returns vector of item pointers
    std::vector<Item*>& getItems();
    void listItems();

    private:
    //Vectors of pointers to Item objects and User objects
    std::vector<Item*> items;
    std::vector<User*> users;
};


#endif //LIBRARYMANAGEMENT_SYSTEM_H
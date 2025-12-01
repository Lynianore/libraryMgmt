//
// Created by Lynianore on 24/11/2025.
//

#ifndef LIBRARYMANAGEMENT_SYSTEM_H
#define LIBRARYMANAGEMENT_SYSTEM_H

#include <vector>
#include "item.h"

class System {
    public:
    //Constructor
    System();

    //Adds Item object pointer to items vector
    void addItem(Item* item);

    //Returns vector of item pointers
    std::vector<Item*>& getItems();

    private:
    // Vector of pointers to Item objects
    std::vector<Item*> items;
};


#endif //LIBRARYMANAGEMENT_SYSTEM_H
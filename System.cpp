//
// Created by Lynianore on 24/11/2025.
//

#include "System.h"
#include <vector>
#include <algorithm>

System::System() {}
//Adds item pointers to vector
void System::addItem(Item* item) {
    //Checks if item is already presents, increases number of copies and deletes the item it would've added otherwise
    for (auto& it : items) {
        if (it->getTitle() == item->getTitle()) {
            it->addCopies(item->getCopiesAvailable());
            delete item;
            return;
        }
    }
    //If item isn't already pressent simply adds item to vector
    items.push_back(item);
}

//Getter for all items in library
std::vector<Item*>& System::getItems() {
    return items;
}
#include <iostream>
#include "Item.h"
#include "Book.h"
#include "System.h"
using namespace std;

int main () {
    //Create system object
    System sys;
    //Add books to library
    sys.addItem(new Book("Electronics a Systems Approach", "Storey, Neil", 841, "621.381", 2));
    sys.addItem(new Book("Jumping into C++", "Allain, Alex", 516, "005.117", 1));
    //Add duplicate books, copies should merge and should be displayed as one object with 2 more copies
    sys.addItem(new Book("Jumping into C++", "Allain, Alex", 516, "005.117", 2));

    //Creates variable so that we can access items
    vector<Item*>& items = sys.getItems();

    //Runs overview getter for each item in items vector
    for (int i = 0; i < items.size(); i++) {
        items[i]->getOverview();
    }
}
//
// Created by Lynianore on 18/11/2025.
//

#include "Item.h"
#include <iostream>
using namespace std;

//Constructor, defaults for copies and times borrowed are zero, copies available is equivalent to total copies minus copies borrowed
Item::Item(string title, string author, int length, string ID, int copies) {
    this->title = title;
    this->author = author;
    this->length = length;
    this->ID = ID;
    this->copies = copies;
    this->copiesBorrowed = 0;
    this->copiesAvailable = copies - copiesBorrowed;
    this->timesBorrowed = 0;
}

//Increases copies integer by num
void Item::addCopies(int num) {
    copies += num;
    copiesAvailable += num;
}

//Returns title
string Item::getTitle() {
    return title;
}

//Returns copies available
int Item::getCopiesAvailable() {
    return copiesAvailable;
}

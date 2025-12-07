//
// Created by Lynianore on 04/12/2025.
//
#include "DVD.h"
using namespace std;

//Constructor
DVD::DVD(string title, string author, int length, string ID, int copies) : Item(title, author, length, ID, copies) {
    this->title = title;
    this->author = author;
    this->length = length;
    this->ID = ID;
    this->copies = copies;
}

//Prints overview for DVD
void DVD::getOverview() {
    cout << "\nTitle: " << title;
    cout << "\nDirector: " << author;
    cout << "\nLength: " << length << " minutes";
    cout << "\nDewey Decimal ID: " << ID;
    cout << "\nTotal copies: " << copies;
    cout << "\nAvailable copies: " << getCopiesAvailable() << endl;
}
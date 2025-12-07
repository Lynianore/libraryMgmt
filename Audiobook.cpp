//
// Created by Lynianore on 04/12/2025.
//

#include "Audiobook.h"
using namespace std;

//Constructor
Audiobook::Audiobook(string title, string author, int length, string ID, int copies) : Item(title, author, length, ID, copies) {
    this->title = title;
    this->author = author;
    this->length = length;
    this->ID = ID;
    this->copies = copies;
}

//Prints overview for audiobook
void Audiobook::getOverview() {
    cout << "\nTitle: " << title;
    cout << "\nRead By: " << author;
    cout << "\nLength: " << length << " minutes";
    cout << "\nDewey Decimal ID: " << ID;
    cout << "\nTotal copies: " << copies;
    cout << "\nAvailable copies: " << copiesAvailable << endl;
}
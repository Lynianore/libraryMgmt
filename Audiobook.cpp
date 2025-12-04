//
// Created by Lynianore on 04/12/2025.
//

#include <iostream>
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
    cout << endl << "Title: " << title << endl;
    cout << "Read By: " << author << endl;
    cout << "Length: " << length << " minutes" << endl;
    cout << "Dewey Decimal ID: " << ID << endl;
    cout << "Total copies: " << copies << endl;
    cout << "Available copies: " << copiesAvailable << endl;
}
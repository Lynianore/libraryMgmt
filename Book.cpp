//
// Created by Lynianore on 18/11/2025.
//
#include <iostream>
#include "Book.h"
using namespace std;

//Constructor
Book::Book(string title, string author, int length, string ID, int copies) : Item(title, author, length, ID, copies) {
    this->title = title;
    this->author = author;
    this->length = length;
    this->ID = ID;
    this->copies = copies;
}

//Prints overview for book
void Book::getOverview() {
    cout << endl << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "length: " << length << " pages" << endl;
    cout << "Dewey Decimal ID: " << ID << endl;
    cout << "Total copies: " << copies << endl;
    cout << "Available copies: " << copiesAvailable << endl;
}
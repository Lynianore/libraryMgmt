//
// Created by Lynianore on 18/11/2025.
//
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
    cout << "\nTitle: " << title;
    cout << "\nAuthor: " << author;
    cout << "\nLength: " << length << " pages";
    cout << "\nDewey Decimal ID: " << ID;
    cout << "\nTotal copies: " << copies;
    cout << "\nAvailable copies: " << getCopiesAvailable() << endl;
}
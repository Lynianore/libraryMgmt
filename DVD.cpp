//
// Created by Lynianore on 04/12/2025.
//
#include <iostream>
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
    cout << endl << "Title: " << title << endl;
    cout << "Director: " << author << endl;
    cout << "Length: " << length << " minutes" << endl;
    cout << "Dewey Decimal ID: " << ID << endl;
    cout << "Total copies: " << copies << endl;
    cout << "Available copies: " << copiesAvailable << endl;
}
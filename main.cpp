#include "Item.h"
#include "Book.h"
#include "DVD.h"
#include "Audiobook.h"
#include "Staff.h"
#include "User.h"
#include "Student.h"
#include "System.h"

using namespace std;

int main () {
    //Create system object
    System sys;
    User* staff1 = new Staff("Cheong Took, Clive", "L001");
    sys.addUser(staff1);
    User* staff2 = new Staff("Alty, Steve", "L002");
    sys.addUser(staff2);
    //Add books to library
    staff2->addItem(sys, new Book("Electronics a Systems Approach", "Storey, Neil", 841, "621.381", 2));
    staff1->addItem(sys, new Book("Jumping into C++", "Allain, Alex", 516, "005.117", 1));
    //Add duplicate books, copies should merge and should be displayed as one object with 2 more copies
    staff1->addItem(sys, new Book("Jumping into C++", "Allain, Alex", 516, "005.117", 2));
    //Add dvd to library
    staff2->addItem(sys, new DVD("Citizen Kane", "Welles, Orson", 120, "791.437", 1));
    //Remove item
    staff1->removeItem(sys, "791.437");

    sys.addUser(new Student("Charlton, Thomas", "S001"));
    sys.addUser(new Student("Hagan, Julius-Joel", "S002"));
    sys.addUser(new Student("Saludes, Borg", "S003"));
    sys.addUser(new Student("Shahin, Eiad", "S004"));


    sys.borrowItem("S002","005.117");
    sys.listItems();
}
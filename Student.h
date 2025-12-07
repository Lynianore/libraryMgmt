//
// Created by Lynianore on 07/12/2025.
//

#ifndef LIBRARYMANAGEMENT_STUDENT_H
#define LIBRARYMANAGEMENT_STUDENT_H
#include "User.h"

class Student : public User {
    public:
    Student(std::string, std::string);
    void getOverview();
};


#endif //LIBRARYMANAGEMENT_STUDENT_H
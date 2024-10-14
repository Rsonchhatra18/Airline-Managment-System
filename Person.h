#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a);
    virtual void displayInfo() const = 0; // Pure virtual function for displaying info
};

#endif

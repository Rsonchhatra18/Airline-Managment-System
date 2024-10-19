#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
protected:
    std::string name;
    int age;

public:
    Person(std::string n, int a);
    virtual void displayInfo() const = 0; // Pure virtual function for polymorphism
    virtual ~Person() {}                  // Virtual destructor
};

#endif

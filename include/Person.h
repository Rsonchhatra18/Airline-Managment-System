#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
protected:
    std::string name;
    int age;

public:
    Person(std::string name, int age);

    std::string getName() const;
    int getAge() const;

    virtual void displayInfo() const;
};

#endif // PERSON_H

#include "Person.h"
#include <iostream>

Person::Person(std::string name, int age) : name(name), age(age) {}

std::string Person::getName() const
{
    return name;
}

int Person::getAge() const
{
    return age;
}

// Implement the displayInfo method
void Person::displayInfo() const
{
    std::cout << "Name: " << name << ", Age: " << age << "\n";
}

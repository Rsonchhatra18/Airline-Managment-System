#include "CrewMember.h"
#include <iostream>

CrewMember::CrewMember(std::string name, int age, std::string employeeID, std::string role)
    : Person(name, age), employeeID(employeeID), role(role) {}

void CrewMember::displayInfo() const
{
    std::cout << "Crew Member Name: " << name << ", Age: " << age
              << ", Employee ID: " << employeeID << ", Role: " << role << "\n";
}

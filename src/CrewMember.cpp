#include "CrewMember.h"
#include <iostream>

CrewMember::CrewMember(std::string n, int a, std::string empID, std::string r)
    : Person(n, a), employeeID(empID), role(r) {}

void CrewMember::displayInfo() const
{
    std::cout << "Crew Member: " << name
              << ", Age: " << age
              << ", Employee ID: " << employeeID
              << ", Role: " << role << std::endl;
}

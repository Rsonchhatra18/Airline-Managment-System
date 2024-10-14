#include "CrewMember.h"
#include <iostream>

CrewMember::CrewMember(string n, int a, string empID, string r) : Person(n, a), employeeID(empID), role(r) {}

void CrewMember::displayInfo() const {
    cout << "Crew Member: " << name << ", Age: " << age << ", Employee ID: " << employeeID << ", Role: " << role << endl;
}

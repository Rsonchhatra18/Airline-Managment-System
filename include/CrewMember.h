#ifndef CREWMEMBER_H
#define CREWMEMBER_H

#include "Person.h"

class CrewMember : public Person {
private:
    string employeeID;
    string role;

public:
    CrewMember(string n, int a, string empID, string r);
    void displayInfo() const override;
};

#endif

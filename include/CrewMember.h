#ifndef CREWMEMBER_H
#define CREWMEMBER_H

#include "Person.h"

class CrewMember : public Person
{
private:
    std::string employeeID;
    std::string role;

public:
    CrewMember(std::string n, int a, std::string empID, std::string r);
    void displayInfo() const override;
    virtual ~CrewMember() {} // Virtual destructor
};

#endif

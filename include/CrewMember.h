#ifndef CREWMEMBER_H
#define CREWMEMBER_H

#include <string>
#include "Person.h"

class CrewMember : public Person
{
private:
    std::string employeeID;
    std::string role;

public:
    CrewMember(std::string name, int age, std::string employeeID, std::string role);

    void displayInfo() const override;
};

#endif // CREWMEMBER_H

#ifndef PASSENGER_H
#define PASSENGER_H

#include "Person.h"

class Passenger : public Person
{
private:
    std::string passportNumber;
    std::string seatNumber;

public:
    Passenger(std::string n, int a, std::string pNo);
    void assignSeat(std::string seat);
    void displayInfo() const override;
    virtual ~Passenger() {} // Virtual destructor
};

#endif

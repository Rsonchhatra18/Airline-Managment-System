#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>
#include "Person.h"

class Passenger : public Person
{
private:
    std::string passportNumber;
    std::string seatNumber;

public:
    Passenger(std::string name, int age, std::string passport);

    std::string getName() const;
    std::string getPassportNumber() const;

    void assignSeat(const std::string &seat);
    void displayInfo() const override;
};

#endif // PASSENGER_H

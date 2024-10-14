#ifndef PASSENGER_H
#define PASSENGER_H

#include "Person.h"

class Passenger : public Person {
private:
    string passportNumber;
    string seatNumber;

public:
    Passenger(string n, int a, string pNo);
    void assignSeat(string seat);
    void displayInfo() const override;
};

#endif

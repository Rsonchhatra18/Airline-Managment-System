#include "Passenger.h"
#include <iostream>

Passenger::Passenger(std::string n, int a, std::string pNo)
    : Person(n, a), passportNumber(pNo), seatNumber("") {}

void Passenger::assignSeat(std::string seat)
{
    seatNumber = seat;
}

void Passenger::displayInfo() const
{
    std::cout << "Passenger: " << name << ", Age: " << age
              << ", Passport No: " << passportNumber
              << ", Seat: " << seatNumber << std::endl;
}

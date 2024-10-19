#include "Passenger.h"
#include <iostream>

// Constructor for Passenger
Passenger::Passenger(std::string name, int age, std::string passport)
    : Person(name, age), passportNumber(passport) {}

// Getter for the passenger's name (using Person's getName)
std::string Passenger::getName() const
{
    return Person::getName();
}

// Getter for the passport number
std::string Passenger::getPassportNumber() const
{
    return passportNumber;
}

// Assign a seat to the passenger
void Passenger::assignSeat(const std::string &seat)
{
    seatNumber = seat;
}

// Override displayInfo to show passenger-specific info
void Passenger::displayInfo() const
{
    std::cout << "Passenger Name: " << name << ", Age: " << age
              << ", Passport Number: " << passportNumber
              << ", Seat: " << seatNumber << "\n";
}

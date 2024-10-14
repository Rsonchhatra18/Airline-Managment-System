#include "Passenger.h"
#include <iostream>

Passenger::Passenger(string n, int a, string pNo) : Person(n, a), passportNumber(pNo), seatNumber("") {}

void Passenger::assignSeat(string seat) {
    seatNumber = seat;
}

void Passenger::displayInfo() const {
    cout << "Passenger: " << name << ", Age: " << age << ", Passport No: " << passportNumber << ", Seat: " << seatNumber << endl;
}

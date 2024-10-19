#include "Booking.h"
#include <iostream>

Booking::Booking(std::string bID, Passenger &p, Flight *f)
    : bookingID(bID), passenger(p), flight(f) {}

void Booking::confirmBooking(std::string seatNumber)
{
    passenger.assignSeat(seatNumber);
    flight->addPassenger(passenger);
}

void Booking::displayBookingInfo()
{
    std::cout << "Booking ID: " << bookingID << std::endl;
    passenger.displayInfo();
    flight->displayFlightInfo();
}

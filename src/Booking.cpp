#include "Booking.h"
#include <iostream>

Booking::Booking(string bID, Passenger& p, Flight* f) : bookingID(bID), passenger(p), flight(f) {}

void Booking::confirmBooking(string seatNumber) {
    passenger.assignSeat(seatNumber);
    flight->addPassenger(passenger);
}

void Booking::displayBookingInfo() {
    cout << "Booking ID: " << bookingID << endl;
    passenger.displayInfo();
    cout << "Flight Info: " << endl;
    flight->displayFlightInfo();
}

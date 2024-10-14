#ifndef BOOKING_H
#define BOOKING_H

#include "Passenger.h"
#include "Flight.h"

class Booking {
private:
    string bookingID;
    Passenger passenger;
    Flight* flight;

public:
    Booking(string bID, Passenger& p, Flight* f);
    void confirmBooking(string seatNumber);
    void displayBookingInfo();
};

#endif

#ifndef BOOKING_H
#define BOOKING_H

#include <string>
#include "Passenger.h"
#include "Flight.h"

class Booking
{
private:
    std::string bookingID;
    Passenger &passenger;
    Flight *flight;

public:
    Booking(std::string bID, Passenger &p, Flight *f);
    void confirmBooking(std::string seatNumber);
    void displayBookingInfo();
};

#endif // BOOKING_H

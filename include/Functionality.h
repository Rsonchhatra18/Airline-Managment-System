#ifndef FUNCTIONALITY_H
#define FUNCTIONALITY_H

#include "Airline.h"
#include "Flight.h"

// Declare the functions
void addAircraft(Airline &airline);
void addFlight(Airline &airline);
void addPassenger(Flight &flight);
void addCrewMember(Flight &flight);
void manageBookings(Flight &flight);

#endif // FUNCTIONALITY_H

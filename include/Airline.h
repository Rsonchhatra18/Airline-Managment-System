#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include <string>
#include "Flight.h"
#include "Aircraft.h"

class Airline
{
private:
    std::string airlineName;
    std::vector<Flight *> flights;
    std::vector<Aircraft *> aircrafts;

public:
    Airline(std::string name);
    void addFlight(Flight *flight);
    void addAircraft(Aircraft *ac);
    void displayAirlineInfo();

    // Getter methods to access the aircraft and flight lists
    const std::vector<Aircraft *> &getAircrafts() const; // Return list of aircrafts
    const std::vector<Flight *> &getFlights() const;     // Return list of flights
};

#endif

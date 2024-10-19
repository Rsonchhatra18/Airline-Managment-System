#ifndef AIRLINE_H
#define AIRLINE_H

#include <string>
#include <vector>
#include "Aircraft.h"
#include "Flight.h"

class Airline
{
private:
    std::string airlineName;
    std::vector<Aircraft *> aircrafts;
    std::vector<Flight *> flights;

public:
    Airline(std::string name);

    void addAircraft(Aircraft *aircraft);
    void addFlight(Flight *flight);
    void displayAirlineInfo() const;

    std::vector<Aircraft *> getAircrafts() const;
    std::vector<Flight *> getFlights() const;
};

#endif // AIRLINE_H

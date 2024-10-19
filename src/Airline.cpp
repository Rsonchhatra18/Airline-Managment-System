#include "Airline.h"
#include <iostream>

Airline::Airline(std::string name) : airlineName(name) {}

void Airline::addFlight(Flight *flight)
{
    flights.push_back(flight);
}

void Airline::addAircraft(Aircraft *ac)
{
    aircrafts.push_back(ac);
}

void Airline::displayAirlineInfo()
{
    std::cout << "Airline: " << airlineName << std::endl;
    std::cout << "Aircrafts: " << std::endl;
    for (const auto &ac : aircrafts)
    {
        ac->displayAircraftInfo();
    }
    std::cout << "Flights: " << std::endl;
    for (const auto &flight : flights)
    {
        flight->displayFlightInfo();
    }
}

// Return the list of aircrafts
const std::vector<Aircraft *> &Airline::getAircrafts() const
{
    return aircrafts;
}

// Return the list of flights
const std::vector<Flight *> &Airline::getFlights() const
{
    return flights;
}

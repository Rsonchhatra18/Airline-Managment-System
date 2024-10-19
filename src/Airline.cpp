#include "Airline.h"
#include <iostream>

// Constructor
Airline::Airline(std::string name) : airlineName(name) {}

// Add an aircraft
void Airline::addAircraft(Aircraft *aircraft)
{
    aircrafts.push_back(aircraft);
}

// Add a flight
void Airline::addFlight(Flight *flight)
{
    flights.push_back(flight);
}

// Display airline information
void Airline::displayAirlineInfo() const
{
    std::cout << "Airline: " << airlineName << "\n";
    std::cout << "Aircraft List:\n";
    for (const auto &aircraft : aircrafts)
    {
        aircraft->displayAircraftInfo();
    }
    std::cout << "\nFlights List:\n";
    for (const auto &flight : flights)
    {
        flight->displayFlightInfo();
    }
}

// **Define getAircrafts()** — Return the list of aircrafts
std::vector<Aircraft *> Airline::getAircrafts() const
{
    return aircrafts;
}

// **Define getFlights()** — Return the list of flights
std::vector<Flight *> Airline::getFlights() const
{
    return flights;
}

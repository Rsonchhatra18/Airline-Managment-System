#include "Flight.h"
#include <iostream>

// Constructor
Flight::Flight(std::string fNum, std::string orig, std::string dest, std::string dTime, std::string aTime, Aircraft *ac)
    : flightNumber(fNum), origin(orig), destination(dest), departureTime(dTime), arrivalTime(aTime), aircraft(ac) {}

// Add a passenger to the flight
void Flight::addPassenger(Passenger &p)
{
    if (passengers.size() < aircraft->getCapacity())
    {
        passengers.push_back(p);
    }
    else
    {
        std::cout << "Flight fully booked!" << std::endl;
    }
}

// Assign a crew member to the flight
void Flight::assignCrew(CrewMember &cm)
{
    crew.push_back(cm);
}

// Display flight information
void Flight::displayFlightInfo() const
{
    std::cout << "Flight Number: " << flightNumber << "\n";
    std::cout << "Origin: " << origin << ", Destination: " << destination << "\n";
    std::cout << "Departure: " << departureTime << ", Arrival: " << arrivalTime << "\n";
    aircraft->displayAircraftInfo();
    std::cout << "\nPassengers List:\n";
    for (const auto &passenger : passengers)
    {
        passenger.displayInfo();
    }
    std::cout << "\nCrew Members:\n";
    for (const auto &crewMember : crew)
    {
        crewMember.displayInfo();
    }
}

// **Define getPassengers()** — Return the list of passengers
const std::vector<Passenger> &Flight::getPassengers() const
{
    return passengers;
}

// **Define getFlightNumber()** — Return the flight number
std::string Flight::getFlightNumber() const
{
    return flightNumber;
}

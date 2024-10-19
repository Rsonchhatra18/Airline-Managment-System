#include "Flight.h"
#include <iostream>

Flight::Flight(std::string fNum, std::string orig, std::string dest, std::string dTime, std::string aTime, Aircraft *ac)
    : flightNumber(fNum), origin(orig), destination(dest), departureTime(dTime), arrivalTime(aTime), aircraft(ac) {}

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

void Flight::assignCrew(CrewMember &cm)
{
    crew.push_back(cm);
}

void Flight::displayFlightInfo()
{
    std::cout << "Flight Number: " << flightNumber
              << ", Origin: " << origin
              << ", Destination: " << destination << std::endl;
    std::cout << "Departure: " << departureTime
              << ", Arrival: " << arrivalTime << std::endl;
    aircraft->displayAircraftInfo();
    std::cout << "\nPassengers List: " << std::endl;
    for (const auto &passenger : passengers)
    {
        passenger.displayInfo();
    }
    std::cout << "\nCrew List: " << std::endl;
    for (const auto &cm : crew)
    {
        cm.displayInfo();
    }
}

// Return the list of passengers
const std::vector<Passenger> &Flight::getPassengers() const
{
    return passengers;
}

// Getter for flight number
std::string Flight::getFlightNumber() const
{
    return flightNumber;
}

#ifndef FLIGHT_H
#define FLIGHT_H

#include <vector>
#include <string>
#include "Passenger.h"
#include "CrewMember.h"
#include "Aircraft.h"

class Flight
{
private:
    std::string flightNumber;
    std::string origin;
    std::string destination;
    std::string departureTime;
    std::string arrivalTime;
    Aircraft *aircraft;
    std::vector<Passenger> passengers;
    std::vector<CrewMember> crew;

public:
    Flight(std::string fNum, std::string orig, std::string dest, std::string dTime, std::string aTime, Aircraft *ac);
    void addPassenger(Passenger &p);
    void assignCrew(CrewMember &cm);
    void displayFlightInfo();

    // Getter method to access the list of passengers
    const std::vector<Passenger> &getPassengers() const;

    // Getter for flight number
    std::string getFlightNumber() const; // Add this line
};

#endif

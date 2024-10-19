#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>
#include <vector>
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
    void displayFlightInfo() const;

    std::string getFlightNumber() const;
    std::string getOrigin() const;
    std::string getDestination() const;
    std::string getDepartureTime() const;
    std::string getArrivalTime() const;
    Aircraft *getAircraft() const;
    const std::vector<Passenger> &getPassengers() const;
    const std::vector<CrewMember> &getCrew() const;
};

#endif // FLIGHT_H

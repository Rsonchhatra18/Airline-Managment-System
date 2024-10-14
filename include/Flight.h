#ifndef FLIGHT_H
#define FLIGHT_H

#include <vector>
#include "Passenger.h"
#include "CrewMember.h"
#include "Aircraft.h"

class Flight {
private:
    string flightNumber;
    string origin;
    string destination;
    string departureTime;
    string arrivalTime;
    Aircraft* aircraft;
    vector<Passenger> passengers;
    vector<CrewMember> crew;

public:
    Flight(string fNum, string orig, string dest, string dTime, string aTime, Aircraft* ac);
    void addPassenger(Passenger& p);
    void assignCrew(CrewMember& cm);
    void displayFlightInfo();
};

#endif

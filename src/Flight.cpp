#include "Flight.h"
#include <iostream>

Flight::Flight(string fNum, string orig, string dest, string dTime, string aTime, Aircraft* ac)
    : flightNumber(fNum), origin(orig), destination(dest), departureTime(dTime), arrivalTime(aTime), aircraft(ac) {}

void Flight::addPassenger(Passenger& p) {
    if (passengers.size() < aircraft->getCapacity()) {
        passengers.push_back(p);
    } else {
        cout << "Flight is fully booked!" << endl;
    }
}

void Flight::assignCrew(CrewMember& cm) {
    crew.push_back(cm);
}

void Flight::displayFlightInfo() {
    cout << "Flight Number: " << flightNumber << ", Origin: " << origin << ", Destination: " << destination << endl;
    cout << "Departure: " << departureTime << ", Arrival: " << arrivalTime << endl;
    aircraft->displayAircraftInfo();
    cout << "\nPassengers List: " << endl;
    for (const auto& passenger : passengers) {
        passenger.displayInfo();
    }
    cout << "\nCrew List: " << endl;
    for (const auto& cm : crew) {
        cm.displayInfo();
    }
}

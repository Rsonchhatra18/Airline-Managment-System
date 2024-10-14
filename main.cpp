#include<iostream>
#include "Airline.h"
#include "Aircraft.h"
#include "Flight.h"
#include "Passenger.h"
#include "CrewMember.h"
#include "Booking.h"

int main() {
    // Create an airline
    Airline myAirline("SkyLine");

    // Create aircrafts
    Aircraft* ac1 = new Aircraft("A101", "Boeing 737", 180);
    Aircraft* ac2 = new Aircraft("A202", "Airbus A320", 160);
    
    myAirline.addAircraft(ac1);
    myAirline.addAircraft(ac2);

    // Create flights
    Flight* flight1 = new Flight("F123", "New York", "London", "08:00 AM", "10:00 PM", ac1);
    Flight* flight2 = new Flight("F456", "Paris", "Dubai", "09:00 AM", "06:00 PM", ac2);

    myAirline.addFlight(flight1);
    myAirline.addFlight(flight2);

    // Create passengers and crew members
    Passenger* p1 = new Passenger("John Doe", 30, "P123456");
    Passenger* p2 = new Passenger("Jane Smith", 25, "P789012");

    CrewMember* cm1 = new CrewMember("Alice", 35, "E001", "Pilot");
    CrewMember* cm2 = new CrewMember("Bob", 40, "E002", "Flight Attendant");

    // Assign passengers and crew members to flight
    flight1->addPassenger(*p1);
    flight1->addPassenger(*p2);
    flight1->assignCrew(*cm1);
    flight1->assignCrew(*cm2);

    // Clean up dynamically allocated memory
    delete p1;
    delete p2;
    delete cm1;
    delete cm2;
    delete flight1;
    delete flight2;
    delete ac1;
    delete ac2;

    return 0;
}
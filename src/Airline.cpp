#include "Airline.h"
#include <iostream>

Airline::Airline(string name) : airlineName(name) {}

void Airline::addFlight(Flight* flight) {
    flights.push_back(flight);
}

void Airline::addAircraft(Aircraft* ac) {
    aircrafts.push_back(ac);
}

void Airline::displayAirlineInfo() {
    cout << "Airline: " << airlineName << endl;
    cout << "Available Flights: " << endl;
    for (const auto& flight : flights) {
        flight->displayFlightInfo();
        cout << endl;
    }
}

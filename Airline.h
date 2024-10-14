#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include <string> // Add this line
#include "Flight.h"

class Airline {
private:
    std::string airlineName; // Use std::string
    std::vector<Flight*> flights;
    std::vector<Aircraft*> aircrafts;
public:
    Airline(std::string name); // Use std::string
    void addFlight(Flight* flight);
    void addAircraft(Aircraft* ac);
    void displayAirlineInfo();
};

#endif
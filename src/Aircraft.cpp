#include "Aircraft.h"
#include <iostream>

Aircraft::Aircraft(std::string id, std::string m, int capacity)
    : aircraftID(id), model(m), seatingCapacity(capacity) {}

void Aircraft::displayAircraftInfo()
{
    std::cout << "Aircraft ID: " << aircraftID
              << ", Model: " << model
              << ", Seating Capacity: " << seatingCapacity << std::endl;
}

int Aircraft::getCapacity() const
{
    return seatingCapacity;
}

// Getter for aircraft ID
std::string Aircraft::getAircraftID() const
{
    return aircraftID;
}

#include "Aircraft.h"
#include <iostream>

Aircraft::Aircraft(std::string id, std::string model, int capacity)
    : aircraftID(id), model(model), capacity(capacity) {}

std::string Aircraft::getAircraftID() const
{
    return aircraftID;
}

std::string Aircraft::getModel() const
{
    return model;
}

int Aircraft::getCapacity() const
{
    return capacity;
}

void Aircraft::displayAircraftInfo() const
{
    std::cout << "Aircraft ID: " << aircraftID << "\n"
              << "Model: " << model << "\n"
              << "Capacity: " << capacity << "\n";
}

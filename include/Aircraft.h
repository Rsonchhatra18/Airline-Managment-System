#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>

class Aircraft
{
private:
    std::string aircraftID;
    std::string model;
    int capacity;

public:
    Aircraft(std::string id, std::string model, int capacity);

    std::string getAircraftID() const;
    std::string getModel() const;
    int getCapacity() const;

    void displayAircraftInfo() const;
};

#endif // AIRCRAFT_H

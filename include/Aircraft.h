#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>

class Aircraft
{
private:
    std::string aircraftID;
    std::string model;
    int seatingCapacity;

public:
    Aircraft(std::string id, std::string m, int capacity);
    void displayAircraftInfo();
    int getCapacity() const;

    // Getter for aircraft ID
    std::string getAircraftID() const; // Add this line
};

#endif

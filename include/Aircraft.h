#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>
using namespace std;

class Aircraft {
private:
    string aircraftID;
    string model;
    int seatingCapacity;
    string maintenanceSchedule;

public:
    Aircraft(string id, string m, int capacity);
    void scheduleMaintenance(string date);
    void displayAircraftInfo();
    int getCapacity() const;
};

#endif

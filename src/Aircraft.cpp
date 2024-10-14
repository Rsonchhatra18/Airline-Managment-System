#include "Aircraft.h"
#include <iostream>

Aircraft::Aircraft(string id, string m, int capacity) : aircraftID(id), model(m), seatingCapacity(capacity), maintenanceSchedule("None") {}

void Aircraft::scheduleMaintenance(string date) {
    maintenanceSchedule = date;
}

void Aircraft::displayAircraftInfo() {
    cout << "Aircraft ID: " << aircraftID << ", Model: " << model << ", Seating Capacity: " << seatingCapacity << ", Maintenance: " << maintenanceSchedule << endl;
}

int Aircraft::getCapacity() const {
    return seatingCapacity;
}

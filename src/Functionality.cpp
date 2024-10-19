#include <iostream>
#include "Airline.h"
#include "Flight.h"
#include "Functionality.h"
#include "Utility.h"
#include "Passenger.h"
#include "CrewMember.h"
#include "Booking.h"

// Function to add an aircraft to an airline
void addAircraft(Airline &airline)
{
    std::string acID, acModel;
    int acCapacity;
    displaySeparator(); // For visual separation
    std::cout << "Enter Aircraft details:\n";
    std::cout << "Aircraft ID: ";
    std::getline(std::cin, acID);
    std::cout << "Model: ";
    std::getline(std::cin, acModel);
    std::cout << "Seating Capacity: ";
    std::cin >> acCapacity;
    std::cin.ignore(); // Clear the input buffer

    Aircraft *aircraft = new Aircraft(acID, acModel, acCapacity);
    airline.addAircraft(aircraft);

    std::cout << "\nAircraft added successfully!\n";
    displaySeparator(); // For visual separation
}

// Function to add a flight to an airline
void addFlight(Airline &airline)
{
    std::string flightNumber, origin, destination, departureTime, arrivalTime, acID;

    displaySeparator();
    airline.displayAirlineInfo(); // Display aircrafts for the airline
    std::cout << "\nEnter Flight details:\n";
    std::cout << "Flight Number: ";
    std::getline(std::cin, flightNumber);
    std::cout << "Origin: ";
    std::getline(std::cin, origin);
    std::cout << "Destination: ";
    std::getline(std::cin, destination);
    std::cout << "Departure Time: ";
    std::getline(std::cin, departureTime);
    std::cout << "Arrival Time: ";
    std::getline(std::cin, arrivalTime);

    // Find the aircraft to assign to the flight
    std::cout << "Enter Aircraft ID for the flight: ";
    std::getline(std::cin, acID);

    for (auto ac : airline.getAircrafts())
    {
        if (ac->getAircraftID() == acID)
        {
            Flight *flight = new Flight(flightNumber, origin, destination, departureTime, arrivalTime, ac);
            airline.addFlight(flight);
            std::cout << "\nFlight added successfully!\n";
            displaySeparator();
            return;
        }
    }

    std::cout << "\nAircraft ID not found!\n";
    displaySeparator();
}

// Function to add a passenger to a flight
void addPassenger(Flight &flight)
{
    std::string passengerName, passportNumber;
    int passengerAge;

    displaySeparator();
    std::cout << "Enter Passenger details:\n";
    std::cout << "Name: ";
    std::getline(std::cin, passengerName);
    std::cout << "Age: ";
    std::cin >> passengerAge;
    std::cin.ignore(); // Clear the input buffer
    std::cout << "Passport Number: ";
    std::getline(std::cin, passportNumber);

    Passenger *passenger = new Passenger(passengerName, passengerAge, passportNumber);
    flight.addPassenger(*passenger);

    std::cout << "\nPassenger added successfully!\n";
    displaySeparator();
}

// Function to add a crew member to a flight
void addCrewMember(Flight &flight)
{
    std::string employeeName, employeeID, role;
    int crewAge;

    displaySeparator();
    std::cout << "Enter Crew Member details:\n";
    std::cout << "Name: ";
    std::getline(std::cin, employeeName);
    std::cout << "Age: ";
    std::cin >> crewAge;
    std::cin.ignore(); // Clear the input buffer
    std::cout << "Employee ID: ";
    std::getline(std::cin, employeeID);
    std::cout << "Role: ";
    std::getline(std::cin, role);

    CrewMember *crewMember = new CrewMember(employeeName, crewAge, employeeID, role);
    flight.assignCrew(*crewMember);

    std::cout << "\nCrew Member added successfully!\n";
    displaySeparator();
}

// Function to manage bookings on a flight
void manageBookings(Flight &flight)
{
    std::string seatNumber, bookingID;

    displaySeparator();
    std::cout << "Enter Booking details:\n";
    std::cout << "Booking ID: ";
    std::getline(std::cin, bookingID);

    addPassenger(flight); // Add a passenger for the booking

    std::cout << "Assign Seat Number: ";
    std::getline(std::cin, seatNumber);

    Passenger passenger = flight.getPassengers().back(); // Get the last added passenger
    Booking booking(bookingID, passenger, &flight);      // Create a booking
    booking.confirmBooking(seatNumber);
    booking.displayBookingInfo();

    displaySeparator();
}

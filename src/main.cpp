#include <iostream>
#include <vector>
#include <string>
#include "Airline.h"
#include "Aircraft.h"
#include "Flight.h"
#include "Passenger.h"
#include "CrewMember.h"
#include "Booking.h"

// Function to display a separator for better readability
void displaySeparator()
{
    std::cout << "\n===============================\n";
}

// Function to add an aircraft
void addAircraft(Airline &airline)
{
    std::string acID, acModel;
    int acCapacity;
    displaySeparator();
    std::cout << "Enter Aircraft details:\n";
    std::cout << "Aircraft ID: ";
    std::getline(std::cin, acID);
    std::cout << "Model: ";
    std::getline(std::cin, acModel);
    std::cout << "Seating Capacity: ";
    std::cin >> acCapacity;
    std::cin.ignore(); // Ignore leftover newline

    Aircraft *aircraft = new Aircraft(acID, acModel, acCapacity);
    airline.addAircraft(aircraft);

    std::cout << "\nAircraft added successfully!\n";
    displaySeparator();
}

// Function to add a flight
void addFlight(Airline &airline)
{
    std::string flightNumber, origin, destination, departureTime, arrivalTime;
    std::string acID;

    displaySeparator();
    airline.displayAirlineInfo(); // Display aircrafts to choose from
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
    std::cout << "Choose Aircraft ID for the flight: ";
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

// Function to add a passenger
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
    std::cin.ignore(); // Ignore leftover newline
    std::cout << "Passport Number: ";
    std::getline(std::cin, passportNumber);

    Passenger *passenger = new Passenger(passengerName, passengerAge, passportNumber);
    flight.addPassenger(*passenger);

    std::cout << "\nPassenger added successfully!\n";
    displaySeparator();
}

// Function to add a crew member
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
    std::cin.ignore(); // Ignore leftover newline
    std::cout << "Employee ID: ";
    std::getline(std::cin, employeeID);
    std::cout << "Role: ";
    std::getline(std::cin, role);

    CrewMember *crewMember = new CrewMember(employeeName, crewAge, employeeID, role);
    flight.assignCrew(*crewMember);

    std::cout << "\nCrew Member added successfully!\n";
    displaySeparator();
}

// Function to manage bookings
void manageBookings(Flight &flight)
{
    std::string seatNumber, bookingID;

    displaySeparator();
    std::cout << "Enter Booking details:\n";
    std::cout << "Booking ID: ";
    std::getline(std::cin, bookingID);
    addPassenger(flight);

    std::cout << "Assign Seat Number: ";
    std::getline(std::cin, seatNumber);

    Passenger passenger = flight.getPassengers().back(); // Create a copy
    Booking booking(bookingID, passenger, &flight);      // Use the copy instead of reference to const
    booking.confirmBooking(seatNumber);
    booking.displayBookingInfo();
    displaySeparator();
}

int main()
{
    std::string airlineName;
    displaySeparator();
    std::cout << "Welcome to Airline Management System\n";
    displaySeparator();
    std::cout << "Enter Airline Name: ";
    std::getline(std::cin, airlineName);

    Airline myAirline(airlineName);

    bool running = true;
    while (running)
    {
        displaySeparator();
        std::cout << "\nAirline Management Menu:\n";
        std::cout << "1. Add Aircraft\n";
        std::cout << "2. Add Flight\n";
        std::cout << "3. Add Passenger to Flight\n";
        std::cout << "4. Add Crew Member to Flight\n";
        std::cout << "5. Make a Booking\n";
        std::cout << "6. View Airline Info\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;
        std::cin.ignore(); // Ignore newline

        switch (choice)
        {
        case 1:
            addAircraft(myAirline);
            break;
        case 2:
            addFlight(myAirline);
            break;
        case 3:
        {
            std::string flightNumber;
            std::cout << "Enter Flight Number to add Passenger: ";
            std::getline(std::cin, flightNumber);

            for (auto flight : myAirline.getFlights())
            {
                if (flight->getFlightNumber() == flightNumber)
                {
                    addPassenger(*flight);
                }
            }
            break;
        }
        case 4:
        {
            std::string flightNumber;
            std::cout << "Enter Flight Number to add Crew Member: ";
            std::getline(std::cin, flightNumber);

            for (auto flight : myAirline.getFlights())
            {
                if (flight->getFlightNumber() == flightNumber)
                {
                    addCrewMember(*flight);
                }
            }
            break;
        }
        case 5:
        {
            std::string flightNumber;
            std::cout << "Enter Flight Number for Booking: ";
            std::getline(std::cin, flightNumber);

            for (auto flight : myAirline.getFlights())
            {
                if (flight->getFlightNumber() == flightNumber)
                {
                    manageBookings(*flight);
                }
            }
            break;
        }
        case 6:
            myAirline.displayAirlineInfo();
            break;
        case 7:
            running = false;
            std::cout << "Exiting Airline Management System...\n";
            break;
        default:
            std::cout << "Invalid choice, please try again.\n";
            break;
        }
    }

    return 0;
}

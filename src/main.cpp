#include <iostream>
#include "Airline.h"
#include "Flight.h"
#include "Utility.h"
#include "Functionality.h"

int main()
{
    std::cout << "+=====================================================+" << std::endl;
    std::cout << "|           Airline Management System                 |" << std::endl;
    std::cout << "+=====================================================+" << std::endl;
    std::string airlineName;

    std::cout << "Enter Airline Name: ";
    std::getline(std::cin, airlineName);

    Airline myAirline(airlineName);

    bool running = true;
    while (running)
    {
        displaySeparator();
        std::cout << "\t+===================================+\n";
        std::cout << "  |     Airline Management Menu:      |\n";
        std::cout << "  +-----------------------------------+ \n";
        std::cout << "  |1. | Add Aircraft                  |\n";
        std::cout << "  |2. | Add Flight                    |\n";
        std::cout << "  |3. | Add Passenger to Flight       |\n";
        std::cout << "  |4. | Add Crew Member to Flight     |\n";
        std::cout << "  |5. | Make a Booking                |\n";
        std::cout << "  |6. | View Airline Info             |\n";
        std::cout << "  |7. | Exit                          |\n";
        std::cout << "  +-----------------------------------+ \n";
        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;
        std::cin.ignore();

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
                else
                {
                    std::cout << "Flight not found!" << std::endl;
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
            std::cout << "Invalid choice, try again.\n";
            break;
        }
    }

    return 0;
}

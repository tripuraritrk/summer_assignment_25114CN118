#include <iostream>
using namespace std;

struct Ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
    int seats;
    bool booked;
};

int main()
{
    Ticket t;
    int choice;

    t.booked = false;

    do
    {
        cout << "\n===== TICKET BOOKING SYSTEM =====" << endl;
        cout << "1. Book Ticket" << endl;
        cout << "2. View Ticket" << endl;
        cout << "3. Cancel Ticket" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                if(t.booked)
                {
                    cout << "Ticket Already Booked!" << endl;
                }
                else
                {
                    cout << "Enter Ticket Number: ";
                    cin >> t.ticketNo;

                    cout << "Enter Passenger Name: ";
                    cin >> t.name;

                    cout << "Enter Destination: ";
                    cin >> t.destination;

                    cout << "Enter Number of Seats: ";
                    cin >> t.seats;

                    t.booked = true;

                    cout << "Ticket Booked Successfully!" << endl;
                }
                break;

            case 2:
                if(t.booked)
                {
                    cout << "\n===== TICKET DETAILS =====" << endl;
                    cout << "Ticket No   : " << t.ticketNo << endl;
                    cout << "Passenger   : " << t.name << endl;
                    cout << "Destination : " << t.destination << endl;
                    cout << "Seats       : " << t.seats << endl;
                }
                else
                {
                    cout << "No Ticket Booked!" << endl;
                }
                break;

            case 3:
                if(t.booked)
                {
                    t.booked = false;
                    cout << "Ticket Cancelled Successfully!" << endl;
                }
                else
                {
                    cout << "No Ticket to Cancel!" << endl;
                }
                break;

            case 4:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}
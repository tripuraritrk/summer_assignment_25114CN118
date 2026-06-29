#include <iostream>
#include <cstring>
using namespace std;

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    Contact c[100];
    int n = 0, choice, i;
    char searchName[50];

    do
    {
        cout << "\n===== CONTACTS MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Display All Contacts" << endl;
        cout << "3. Search Contact" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Name: ";
                cin >> c[n].name;

                cout << "Enter Phone Number: ";
                cin >> c[n].phone;

                n++;

                cout << "Contact Added Successfully!" << endl;
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Contacts Found!" << endl;
                }
                else
                {
                    cout << "\n===== CONTACT LIST =====" << endl;

                    for(i = 0; i < n; i++)
                    {
                        cout << "Name  : " << c[i].name << endl;
                        cout << "Phone : " << c[i].phone << endl;
                        cout << "----------------------" << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Name to Search: ";
                cin >> searchName;

                for(i = 0; i < n; i++)
                {
                    if(strcmp(c[i].name, searchName) == 0)
                    {
                        cout << "\nContact Found!" << endl;
                        cout << "Name  : " << c[i].name << endl;
                        cout << "Phone : " << c[i].phone << endl;
                        break;
                    }
                }

                if(i == n)
                    cout << "Contact Not Found!" << endl;

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
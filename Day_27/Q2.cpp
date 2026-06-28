#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    Employee emp[100];
    int n = 0, choice, id, i;

    do
    {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Search Employee" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> emp[n].id;

                cout << "Enter Employee Name: ";
                cin >> emp[n].name;

                cout << "Enter Salary: ";
                cin >> emp[n].salary;

                n++;

                cout << "Employee Added Successfully!" << endl;
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Employee Records Found!" << endl;
                }
                else
                {
                    cout << "\nEmployee Records:\n";

                    for(i = 0; i < n; i++)
                    {
                        cout << "Employee ID : " << emp[i].id << endl;
                        cout << "Name        : " << emp[i].name << endl;
                        cout << "Salary      : " << emp[i].salary << endl;
                        cout << "--------------------------" << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Employee ID to Search: ";
                cin >> id;

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        cout << "\nEmployee Found!" << endl;
                        cout << "Employee ID : " << emp[i].id << endl;
                        cout << "Name        : " << emp[i].name << endl;
                        cout << "Salary      : " << emp[i].salary << endl;
                        break;
                    }
                }

                if(i == n)
                {
                    cout << "Employee Not Found!" << endl;
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
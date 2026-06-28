#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, tax, netSalary;
};

int main()
{
    Employee emp[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== SALARY MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display Employee Details" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> emp[n].id;

                cout << "Enter Employee Name: ";
                cin >> emp[n].name;

                cout << "Enter Basic Salary: ";
                cin >> emp[n].basic;

                emp[n].hra = 0.20 * emp[n].basic;
                emp[n].da  = 0.10 * emp[n].basic;
                emp[n].tax = 0.05 * emp[n].basic;

                emp[n].netSalary = emp[n].basic + emp[n].hra + emp[n].da - emp[n].tax;

                cout << "Employee Added Successfully!" << endl;

                n++;
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Records Found!" << endl;
                }
                else
                {
                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nEmployee ID : " << emp[i].id << endl;
                        cout << "Name        : " << emp[i].name << endl;
                        cout << "Basic Salary: " << emp[i].basic << endl;
                        cout << "HRA         : " << emp[i].hra << endl;
                        cout << "DA          : " << emp[i].da << endl;
                        cout << "Tax         : " << emp[i].tax << endl;
                        cout << "Net Salary  : " << emp[i].netSalary << endl;
                        cout << "-----------------------------" << endl;
                    }
                }
                break;

            case 3:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 3);

    return 0;
}
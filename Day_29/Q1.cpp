#include <iostream>
using namespace std;

int main()
{
    int choice;
    float num1, num2;

    do
    {
        cout << "\n===== MENU DRIVEN CALCULATOR =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result = " << num1 * num2 << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                if(num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "Division by zero is not possible!" << endl;

                break;

            case 5:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}
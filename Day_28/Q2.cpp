#include <iostream>
using namespace std;

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    Bank b;
    int choice;
    float amount;
    bool accountCreated = false;

    do
    {
        cout << "\n===== BANK ACCOUNT MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Check Balance" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Withdraw Money" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Account Number: ";
                cin >> b.accNo;

                cout << "Enter Account Holder Name: ";
                cin >> b.name;

                cout << "Enter Initial Balance: ";
                cin >> b.balance;

                accountCreated = true;

                cout << "Account Created Successfully!" << endl;
                break;

            case 2:
                if(accountCreated)
                {
                    cout << "\nAccount Number : " << b.accNo << endl;
                    cout << "Account Holder : " << b.name << endl;
                    cout << "Current Balance: " << b.balance << endl;
                }
                else
                {
                    cout << "Please Create an Account First!" << endl;
                }
                break;

            case 3:
                if(accountCreated)
                {
                    cout << "Enter Deposit Amount: ";
                    cin >> amount;

                    b.balance += amount;

                    cout << "Amount Deposited Successfully!" << endl;
                    cout << "Updated Balance: " << b.balance << endl;
                }
                else
                {
                    cout << "Please Create an Account First!" << endl;
                }
                break;

            case 4:
                if(accountCreated)
                {
                    cout << "Enter Withdrawal Amount: ";
                    cin >> amount;

                    if(amount <= b.balance)
                    {
                        b.balance -= amount;
                        cout << "Withdrawal Successful!" << endl;
                        cout << "Remaining Balance: " << b.balance << endl;
                    }
                    else
                    {
                        cout << "Insufficient Balance!" << endl;
                    }
                }
                else
                {
                    cout << "Please Create an Account First!" << endl;
                }
                break;

            case 5:
                cout << "Thank You for Using Bank Account System!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}
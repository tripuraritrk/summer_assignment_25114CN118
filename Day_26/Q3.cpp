#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance=10000,amount;

    do
    {
        cout<<"\n====ATM MENU===="<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposite Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Current Balance = "<<balance<<endl;
                break;
            
            case 2:
                cout<<"Enter amount to deposit: ";
                cin>>amount;

                balance += amount;
                cout<<"Amount Deposited Successfully!"<<endl;
                cout<<"Updated Balance = "<<balance<<endl;
                break;

            case 3:
                cout<<"Enter amount to withraw: ";
                cin>>amount;
                if(amount<=balance)
                {
                    balance-=amount;
                    cout<<"Please collect your cash."<<endl;
                    cout<<"Rmaining Balance = "<<balance<<endl;
                }
                else{
                    cout<<"Insufficient Balance!"<<endl;
                }
                break;
            case 4:
                cout<<"Thank You for Using ATM!"<<endl;
                break;

            default:
            cout<<"Invalid Choice!"<<endl;
        }
    } while (choice!=4);
    
    return 0;
}
#include <iostream>
using namespace std;

struct Book
{
    int id;
    char name[50];
    char author[50];
    int quantity;
};

int main()
{
    Book b[100];
    int n = 0, choice, id, i;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Book ID: ";
                cin >> b[n].id;

                cout << "Enter Book Name: ";
                cin >> b[n].name;

                cout << "Enter Author Name: ";
                cin >> b[n].author;

                cout << "Enter Quantity: ";
                cin >> b[n].quantity;

                n++;

                cout << "Book Added Successfully!" << endl;
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Books Available!" << endl;
                }
                else
                {
                    cout << "\nBook Records:\n";

                    for(i = 0; i < n; i++)
                    {
                        cout << "Book ID   : " << b[i].id << endl;
                        cout << "Book Name : " << b[i].name << endl;
                        cout << "Author    : " << b[i].author << endl;
                        cout << "Quantity  : " << b[i].quantity << endl;
                        cout << "------------------------" << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Book ID to Search: ";
                cin >> id;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        cout << "\nBook Found!" << endl;
                        cout << "Book ID   : " << b[i].id << endl;
                        cout << "Book Name : " << b[i].name << endl;
                        cout << "Author    : " << b[i].author << endl;
                        cout << "Quantity  : " << b[i].quantity << endl;
                        break;
                    }
                }

                if(i == n)
                    cout << "Book Not Found!" << endl;

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
#include <iostream>
using namespace std;

struct Book
{
    int id;
    char name[50];
    char author[50];
    bool issued;
};

int main()
{
    Book b[100];
    int n = 0, choice, id, i;

    do
    {
        cout << "\n===== MINI LIBRARY SYSTEM =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Issue Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Exit" << endl;

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

                b[n].issued = false;

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
                    cout << "\n===== BOOK LIST =====" << endl;

                    for(i = 0; i < n; i++)
                    {
                        cout << "Book ID : " << b[i].id << endl;
                        cout << "Name    : " << b[i].name << endl;
                        cout << "Author  : " << b[i].author << endl;

                        if(b[i].issued)
                            cout << "Status  : Issued" << endl;
                        else
                            cout << "Status  : Available" << endl;

                        cout << "------------------------" << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Book ID to Issue: ";
                cin >> id;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        if(!b[i].issued)
                        {
                            b[i].issued = true;
                            cout << "Book Issued Successfully!" << endl;
                        }
                        else
                        {
                            cout << "Book Already Issued!" << endl;
                        }
                        break;
                    }
                }

                if(i == n)
                    cout << "Book Not Found!" << endl;

                break;

            case 4:
                cout << "Enter Book ID to Return: ";
                cin >> id;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        if(b[i].issued)
                        {
                            b[i].issued = false;
                            cout << "Book Returned Successfully!" << endl;
                        }
                        else
                        {
                            cout << "Book Was Not Issued!" << endl;
                        }
                        break;
                    }
                }

                if(i == n)
                    cout << "Book Not Found!" << endl;

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
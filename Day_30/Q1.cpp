#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice, i;
    char searchName[50];

    do
    {
        cout << "\n===== STUDENT RECORD SYSTEM =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> s[n].roll;

                cout << "Enter Student Name: ";
                cin >> s[n].name;

                cout << "Enter Marks: ";
                cin >> s[n].marks;

                n++;

                cout << "Student Added Successfully!" << endl;
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Records Found!" << endl;
                }
                else
                {
                    cout << "\n===== STUDENT RECORDS =====" << endl;

                    for(i = 0; i < n; i++)
                    {
                        cout << "Roll No : " << s[i].roll << endl;
                        cout << "Name    : " << s[i].name << endl;
                        cout << "Marks   : " << s[i].marks << endl;
                        cout << "--------------------------" << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Student Name: ";
                cin >> searchName;

                for(i = 0; i < n; i++)
                {
                    if(strcmp(s[i].name, searchName) == 0)
                    {
                        cout << "\nStudent Found!" << endl;
                        cout << "Roll No : " << s[i].roll << endl;
                        cout << "Name    : " << s[i].name << endl;
                        cout << "Marks   : " << s[i].marks << endl;
                        break;
                    }
                }

                if(i == n)
                {
                    cout << "Student Not Found!" << endl;
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
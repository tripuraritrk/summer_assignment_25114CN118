#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    float marks;
};

Student s[100];
int n = 0;

void addStudent()
{
    cout << "\nEnter Roll Number: ";
    cin >> s[n].roll;

    cout << "Enter Name: ";
    cin >> s[n].name;

    cout << "Enter Marks: ";
    cin >> s[n].marks;

    n++;

    cout << "Student Added Successfully!\n";
}

void displayStudents()
{
    if(n == 0)
    {
        cout << "No Records Found!\n";
        return;
    }

    cout << "\n===== STUDENT RECORDS =====\n";

    for(int i = 0; i < n; i++)
    {
        cout << "Roll No : " << s[i].roll << endl;
        cout << "Name    : " << s[i].name << endl;
        cout << "Marks   : " << s[i].marks << endl;
        cout << "------------------------\n";
    }
}

void searchStudent()
{
    char searchName[50];

    cout << "Enter Student Name: ";
    cin >> searchName;

    for(int i = 0; i < n; i++)
    {
        if(strcmp(s[i].name, searchName) == 0)
        {
            cout << "\nStudent Found!\n";
            cout << "Roll No : " << s[i].roll << endl;
            cout << "Name    : " << s[i].name << endl;
            cout << "Marks   : " << s[i].marks << endl;
            return;
        }
    }

    cout << "Student Not Found!\n";
}

void updateMarks()
{
    int roll;

    cout << "Enter Roll Number: ";
    cin >> roll;

    for(int i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            cout << "Enter New Marks: ";
            cin >> s[i].marks;

            cout << "Marks Updated Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

void deleteStudent()
{
    int roll;

    cout << "Enter Roll Number: ";
    cin >> roll;

    for(int i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            for(int j = i; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            n--;

            cout << "Student Deleted Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int roll;
    char name[50];
    float marks[5], total = 0, percentage;

    cout << "===== MARKSHEET GENERATION SYSTEM =====" << endl;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks of 5 Subjects:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = total / 5;

    cout << "\n========== MARKSHEET ==========" << endl;
    cout << "Roll Number : " << roll << endl;
    cout << "Name        : " << name << endl;
    cout << "Total Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if(percentage >= 90)
        cout << "Grade : A+" << endl;
    else if(percentage >= 80)
        cout << "Grade : A" << endl;
    else if(percentage >= 70)
        cout << "Grade : B" << endl;
    else if(percentage >= 60)
        cout << "Grade : C" << endl;
    else if(percentage >= 50)
        cout << "Grade : D" << endl;
    else
        cout << "Grade : F" << endl;

    bool pass = true;

    for(int i = 0; i < 5; i++)
    {
        if(marks[i] < 33)
        {
            pass = false;
            break;
        }
    }

    if(pass)
        cout << "Result : PASS" << endl;
    else
        cout << "Result : FAIL" << endl;

    return 0;
}
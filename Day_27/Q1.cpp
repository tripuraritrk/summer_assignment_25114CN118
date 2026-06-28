#include <iostream>
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
    int n=0, choice, roll,i;

    do
    {
        cout<<"\n==== STUDENT RECORD MANAGEMENT SYSTEM ===="<<endl;
        cout<<"1. Add Students"<<endl;
        cout<<"2. Display All Students"<<endl;
        cout<<"3. Search Student"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter Roll Number: ";
                cin>>s[n].roll;

                cout<<"Enter Name: ";
                cin>>s[n].name;

                cout<<"Enter Marks: ";
                cin>>s[n].marks;

                n++;

                cout<<"Student Record Added Successfully!"<<endl;
                break;
            case 2:
                if(n==0)
                {
                    cout<<"No Record Founds!"<<endl;
                }
                else
                {
                    cout<<"\nStudent Record: \n";

                    for(i=0; i<n; i++)
                    {
                        cout<<"Roll No: "<<s[i].roll<<endl;
                        cout<<"Name: "<<s[i].name<<endl;
                        cout<<"Marks: "<<s[i].marks<<endl;
                        cout<<"___________________"<<endl;
                    }
                }
                break;
            case 3:
                cout<<"Enter Roll Number to Search: ";
                cin>>roll;

                for(i=0; i<n; i++)
                {
                    if(s[i].roll==roll)
                    {
                        cout<<"Student Found!"<<endl;
                        cout<<"Roll No: "<<s[i].roll<<endl;
                        cout<<"Name: "<<s[i].name<<endl;
                        cout<<"Marks: "<<s[i].marks<<endl;
                        break;
                    }
                }
                if(i==n)
                cout<<"Students Not Found!"<<endl;
                break;
            case 4:
                cout<<"Thank You!"<<endl;
                break;

            default:
                cout<<"Invalid choice!"<<endl;
        }
    } while (choice!=4);
    return 0;
}
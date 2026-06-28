#include <iostream>
using namespace std;

int main() {
    int choice, score = 0;

    cout<<"==== QUIZ APPLICATION ===="<<endl;

    //Question 1
    cout<<"\n1. What is the capital of India?"<<endl;
    cout<<"1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n"<<endl;
    cout<<"Enter your answer: ";
    cin>>choice;

    if(choice==2)
    score++;

    //Question 2
    cout<<"\n2. How many months are there in a year?"<<endl;
    cout<<"1. 10\n2. 13\n3. 12\n4. 15\n"<<endl;
    cout<<"Enter your answer: ";
    cin>>choice;

    if(choice==3)
    score++;

    //Question 3
    cout<<"\n3. How many days are there in a week?"<<endl;
    cout<<"1. 5\n2. 6\n3. 8\n4. 7\n"<<endl;
    cout<<"Enter your answer: ";
    cin>>choice;

    if(choice==4)
    score++;

    //Question4
    cout<<"\n4. Which planet is known as the Red Planet?"<<endl;
    cout<<"1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n"<<endl;
    cout<<"Enter your answer: ";
    cin>>choice;

    if(choice==2)
    score++;

    //Question 
    cout<<"\n5. 5+7=?"<<endl;
    cout<<"1. 10\n2. 5\n3. 12\n4. 15\n"<<endl;
    cout<<"Enter your answer: ";
    cin>>choice;

    if(choice==3)
    score++;

    cout<<"\n==== RESULT ===="<<endl;
    cout<<"Your Score = "<<score<<" /5"<<endl;

    if(score ==5)
        cout<<"Excellent!"<<endl;
    else if(score>=3)
        cout<<"Good Job!"<<endl;
    else
        cout<<"Keep Practicing!"<<endl;

    return 0;
}
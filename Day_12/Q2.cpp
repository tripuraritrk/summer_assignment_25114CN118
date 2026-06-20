# include <iostream>
# include <math.h>
using namespace std;

int main()
{
    int n, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while(n!=0)
    {
        digit =n%10;
        sum=sum+digit*digit*digit;
        n=n/10;

    }
    if(sum==original)

        cout<<"The number is an armstrong number."<<endl;

    else

        cout<<"The number is not an armstrong number."<<endl;
    
        return 0;
}
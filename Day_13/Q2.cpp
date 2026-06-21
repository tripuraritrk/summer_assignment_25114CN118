#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    int sum=0;
    float avg;

    cout<<"Enter array elemennt: ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    avg=(float)sum/n;

    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = " <<avg;
    return 0;
}
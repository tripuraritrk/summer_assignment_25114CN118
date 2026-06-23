#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements of array: ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array after removing dupllicates: ";

    for(int i=0; i<n; i++)
    {
        bool duplicates= false;

        for(int j=0; j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                duplicates=true;
                break;
            }
        }
        if(!duplicates)

        cout<<arr[i]<<" ";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements of array: ";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    cout<<"sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
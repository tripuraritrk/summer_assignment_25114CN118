#include <iostream>
using namespace std;

int main()
{
    int arr[100], n = 0;
    int choice, key;
    int sum, largest;

    do
    {
        cout << "\n===== MENU DRIVEN ARRAY OPERATIONS =====" << endl;
        cout << "1. Input Array" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Find Sum" << endl;
        cout << "4. Find Largest Element" << endl;
        cout << "5. Search Element" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter size of array: ";
                cin >> n;

                cout << "Enter array elements: ";
                for(int i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }
                break;

            case 2:
                cout << "Array Elements: ";
                for(int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 3:
                sum = 0;

                for(int i = 0; i < n; i++)
                {
                    sum += arr[i];
                }

                cout << "Sum = " << sum << endl;
                break;

            case 4:
                largest = arr[0];

                for(int i = 1; i < n; i++)
                {
                    if(arr[i] > largest)
                        largest = arr[i];
                }

                cout << "Largest Element = " << largest << endl;
                break;

            case 5:
                cout << "Enter element to search: ";
                cin >> key;

                for(int i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        cout << "Element Found at Position " << i + 1 << endl;
                        break;
                    }

                    if(i == n - 1)
                        cout << "Element Not Found" << endl;
                }
                break;

            case 6:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 6);

    return 0;
}
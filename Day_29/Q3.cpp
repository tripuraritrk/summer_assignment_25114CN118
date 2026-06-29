#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int choice;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    do
    {
        cout << "\n===== MENU DRIVEN STRING OPERATIONS =====" << endl;
        cout << "1. Find Length" << endl;
        cout << "2. Reverse String" << endl;
        cout << "3. Convert to Uppercase" << endl;
        cout << "4. Check Palindrome" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int length = 0;

                while(str[length] != '\0')
                    length++;

                cout << "Length = " << length << endl;
                break;
            }

            case 2:
            {
                int length = 0;

                while(str[length] != '\0')
                    length++;

                cout << "Reversed String: ";

                for(int i = length - 1; i >= 0; i--)
                    cout << str[i];

                cout << endl;
                break;
            }

            case 3:
            {
                for(int i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }

                cout << "Uppercase String: " << str << endl;
                break;
            }

            case 4:
            {
                int length = 0;
                bool palindrome = true;

                while(str[length] != '\0')
                    length++;

                for(int i = 0; i < length / 2; i++)
                {
                    if(str[i] != str[length - i - 1])
                    {
                        palindrome = false;
                        break;
                    }
                }

                if(palindrome)
                    cout << "Palindrome String" << endl;
                else
                    cout << "Not a Palindrome String" << endl;

                break;
            }

            case 5:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}
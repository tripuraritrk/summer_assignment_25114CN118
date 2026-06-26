#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    while(str[length] != '\0')
    {
        length++;
    }

    for(int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}
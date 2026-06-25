#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin >> str;

    while(str[length] != '\0')
    {
        length++;
    }

    cout << "Reversed string: ";

    for(int i = length - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}
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

    cout << "Length of string = " << length;

    return 0;
}
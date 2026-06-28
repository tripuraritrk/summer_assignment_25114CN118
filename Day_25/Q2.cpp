#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    cout << "Common characters: ";

    for(int i = 0; str1[i] != '\0'; i++)
    {
        bool printed = false;

        // Check if already printed
        for(int k = 0; k < i; k++)
        {
            if(str1[i] == str1[k])
            {
                printed = true;
                break;
            }
        }

        if(printed)
            continue;

        for(int j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                cout << str1[i] << " ";
                break;
            }
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    int count1 = 0, count2 = 0;

    while(str1[count1] != '\0')
        count1++;

    while(str2[count2] != '\0')
        count2++;

    if(count1 != count2)
    {
        cout << "Not Anagram";
        return 0;
    }

    // Sort first string
    for(int i = 0; i < count1 - 1; i++)
    {
        for(int j = i + 1; j < count1; j++)
        {
            if(str1[i] > str1[j])
            {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

    // Sort second string
    for(int i = 0; i < count2 - 1; i++)
    {
        for(int j = i + 1; j < count2; j++)
        {
            if(str2[i] > str2[j])
            {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    for(int i = 0; i < count1; i++)
    {
        if(str1[i] != str2[i])
        {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int i, j;
    bool found = false;

    for(i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
                count++;
        }

        if(count == 1)
        {
            cout << "First Non-Repeating Character = " << str[i];
            found = true;
            break;
        }
    }

    if(!found)
        cout << "No Non-Repeating Character Found";

    return 0;
}
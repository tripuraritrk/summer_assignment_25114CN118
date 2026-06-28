#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of names: ";
    cin >> n;

    char name[20][50];

    cout << "Enter names:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> name[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                char temp[50];
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    cout << "Names in Alphabetical Order:\n";

    for(int i = 0; i < n; i++)
    {
        cout << name[i] << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    char str[100], longest[100];
    int i=0,j=0;
    int maxLength=0, length=0;

    cout<<"Enter a sentence: ";
    cin.getline(str,100);

    while(true)
    {
        if(str[i]!=' '&&str[i]!='\0')
        {
            length++;
        }
        else
        {
            if(length>maxLength)
            {
                maxLength=length;

                for(int k=0; k<length;k++)
                {
                    longest[k]=str[i-length+k];
                }
                longest[length]='\0';   
            }
            length=0;
    }
    if(str[i]=='\0')
    break;
    i++;
}
cout<<"Longest Word= "<<longest<<endl;
cout<<"Length= "<<maxLength;
return 0;
}
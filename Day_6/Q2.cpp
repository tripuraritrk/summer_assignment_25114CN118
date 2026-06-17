#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long binary;
    int decimal  = 0, rem, i=0;

    cout<< "enter a binary number:";
    cin>> binary;
    
    while(binary!=0)
    {
        rem = binary % 10;
        decimal += rem * pow(2,i);
        binary /=10;
        i++;
    }
    cout<< "decimal = "<< decimal;

    return 0;
}
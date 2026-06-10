#include <stdio.h>
#include <math.h>

int main()
{
    int n, original, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count digits
    while(original != 0)
    {
        original /= 10;
        digits++;
    }

    original = n;

    // Calculate sum of powers of digits
    while(original != 0)
    {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    if(result == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
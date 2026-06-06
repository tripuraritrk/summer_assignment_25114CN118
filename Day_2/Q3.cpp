#include<stdio.h>
int main()
{
    int n,digit;
    long long product=1;

    printf("enter a number:");
    scanf("%d",&n);

    while(n!=0);
    {
        digit=n%10;
        product=product*digit;
        n=n/10;
    }
    printf("product of digit=%lld",product);
    return 0;
}
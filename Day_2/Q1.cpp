#include<stdio.h>

int main()
{
    int n,digit,sum=0;
    printf("enter a nummber:");
    scanf("%d",&n);

    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("sum of digit=%d",sum);

    return 0;
}
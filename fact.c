#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    printf("The factotial of the number is = %d",fact);
    return 0;
}
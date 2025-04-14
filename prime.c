#include<stdio.h>
int main()
{
    int n,i,isprime=1;
    printf("Enter an integer number : ");
    scanf("%d", &n);
    for(i=2;i<n-1;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==1)
    {
        printf("%d is the prime number. \n",n);
    }
    else
    {
        printf("%d is not prime number. \n",n);
    }
    return 0;
}
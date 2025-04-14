#include<stdio.h>
int main()
{
    int n,on,rn=0,r;
    printf("Enter an integer number : ");
    scanf("%d", &n);
    on=n;
    while(n>0)
    {
        r = n%10;
        rn = rn * 10 + r;
        n = n / 10;
    }
    if(rn == on)
    {
        printf("%d is a palindrome number .\n",on);
    }
    else
    {
        printf("%d is not palindrome number \n",on);
    }
    return 0;
}
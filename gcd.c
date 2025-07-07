#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter first number : ");
    scanf("%d", &n);
    printf("Enter second number : ");
    scanf("%d", &m);
    while(n!=m) {
        if(n>m) {
            n=n-m;
        }
        else {
            m=m-n;
        }
    }
    printf("\n GCD of two numbers is %d",m);
    return 0;
}
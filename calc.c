#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("The sum id =%d ,The sub is =%d , The mul is =%d , The div is = %d\n",sum,sub,mul,div);
    return 0;
}
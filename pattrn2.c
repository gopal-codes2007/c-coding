#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n - i + 1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
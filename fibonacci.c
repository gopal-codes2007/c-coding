#include<stdio.h>
int main() {
    int n,i;
    int a = 0;
    int b = 1;
    int sum;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Fibonacci series : %d %d ",a,b);
    for(i=1;i<=n-2;i++) {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d ", sum);
    }
   //printf("\n");
    return 0;
}
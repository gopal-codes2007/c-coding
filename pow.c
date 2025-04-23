#include<stdio.h>
#include<math.h>
int main() {
    int a,b;
    printf("Enter a first number : ");
    scanf("%d", &a);
    printf("Enter a second number : ");
    scanf("%d", &b);
    int q = pow(a,b);
    printf("The power of the given two number is = %d",q);

    return 0;
}
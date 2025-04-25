#include<stdio.h>

int factorial_using_loop(int);
int factorial_using_recursion(int);

int main() {
    int x,y;
    printf("Enter a number that is used by loop : ");
    scanf("%d", &x);
    printf("Enter a number that is used by recursion : ");
    scanf("%d", &y);
    int res1 = factorial_using_loop(x);
    printf("The result1 is = %d", res1);
    int res2 = factorial_using_recursion(y);
    printf("\nThe result2 is = %d", res2);
    return 0;
}

int factorial_using_recursion(int num) {
    if(num == 0) {
        return 1; 
    }
    return num * factorial_using_recursion( num - 1);
       
}
int factorial_using_loop(int num) {
    int result = 1;
    for(int i = 2;i<=num;i++) {
        result *= i;
    }
    return result;
}

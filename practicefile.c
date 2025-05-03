#include<stdio.h>

int fact_using_recursion();

int main() {
    int y;
    printf("Enter a number that is used by recursion : ");
    scanf("%d", &y);
    int res = fact_using_recursion(y);
    printf("\nThe result is : %d ",res);
    return 0;
}

int fact_using_recursion(int num) {
    if(num == 0) {
        return 1;
    }
    return num*fact_using_recursion(num-1);
}

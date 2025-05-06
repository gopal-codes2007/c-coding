#include<stdio.h>
int main() {
    int a =5;
    int *ptr = &a;
    printf("The address of a is : %s",*ptr);
    return 0;
}
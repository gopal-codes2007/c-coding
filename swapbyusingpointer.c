#include<stdio.h>

void swap(int* ,int*);

int main() {
    int x;
    int y;
    printf("Enter first number : ");
    scanf("%d", &x);
    printf("Enter second number : ");
    scanf("%d", &y);
    printf("\nBefore swapping the value of x and y is : %d , %d",x,y);
    swap(&x,&y);
    printf("\nAfter swapping the value of x and y is : %d , %d",x,y);
    return 0;
}

void swap(int* ptr1 , int* ptr2) {
    int temp =  *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
}
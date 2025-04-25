#include<stdio.h>

void swap(int, int);

int main() {
    int x,y;
    printf("Enter the numbers, those numbers are you want to swap : ");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Before swapping : first no. : %d  second no. : %d",x,y);
    swap(x,y);
    return 0;
}

void swap(int first, int second) {
    int temp = first;
    first = second;
    second = temp;
    printf("\nAfter swapping : first no. : %d  second no. : %d",first,second);

}
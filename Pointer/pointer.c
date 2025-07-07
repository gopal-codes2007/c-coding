#include<stdio.h>
int main() {
    int i = 5;
    int *j = &i;
    int **k = &j;

    printf("Address of i = %p", &i);
    printf("\nAddress of i = %p", j);
    printf("\nAddress of i = %p", *k);
    printf("\nAddress of j = %p", &j);
    printf("\nAddress of j = %p", k);
    printf("\nAddress of k = %p", &k);   
    printf("Value of j = %p", j);
    printf("Value of i = %d", i);
    printf("Value of k = %p", k);
    printf("Value of i = %d", *(&i));
    printf("Value of i = %d",**k);
    return 0;
}
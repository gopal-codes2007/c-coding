#include<stdio.h>

void min_max(int*,int*,int*,int*);

int main() {
    int first,second,min,max;
    printf("Welcome to finding min and max.\n");
    printf("Please, enter the first number :  \n");
    scanf("%d", &first);
    printf("Please, enter second number : \n");
    scanf("%d", &second);
    min_max(&first,&second,&min,&max);
    printf("Between %d and %d , minimum is %d and maximum is %d",first,second,min,max);
    return 0;
}

void min_max(int *a,int *b,int *min,int *max) {
    if(*a < *b) {
        *min = *a;
        *max = *b;
    }
    else {
        *min = *b;
        *max = *a;
    }
}

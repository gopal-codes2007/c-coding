#include<stdio.h>

void Count_to_100();

int sum(int, int);


int main() {
    Count_to_100();
    int add = sum(100,200);
    printf("\nThe sum is = %d", add);
    return 0;
}

void Count_to_100() {
    for(int i=1;i<=100;i++) {
        printf(" %d\n", i);
    }
}

int sum(int first, int second) {
    int addition = first + second;
    return addition;
}
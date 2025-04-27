#include<stdio.h>

void diomond_pattern(int );

int main() {
    int n;
    printf("Enter the size of dimond : ");
    scanf("%d", &n);
    diomond_pattern(n);
    return 0;
}

void diomond_pattern(int n) {
    int i,j;
    for(i=1;i<=n;i++) {
        printf(" ");
    }
    for(j=1;j<=i;j++) {
        printf("* ");
    }
    printf("\n");
    for(i=n-i;i>=1;i--) {
       for(j=1;j<=n-i;j++) {
        printf(" ");
       }
       for(j=1;j<=i;j++) {
        printf("* ");
       }
    printf("\n");
    }
}

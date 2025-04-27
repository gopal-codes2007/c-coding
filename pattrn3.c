#include<stdio.h>

void print_pattern(int);// Function prototype   :-)

int main () {
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    print_pattern(n); // Function call  :-) 
    return 0;
}

void print_pattern(int n) {   // Function definition  :-)
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n-i;j++) {
            printf(" ");
        }
        for(j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
}
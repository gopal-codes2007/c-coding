#include<stdio.h>
#include<conio.h>

int main() {
    int a[50],i=0,n,j;
    printf("Enter  the decimal number : ");
    scanf("%d", &n);
    while(n>0) {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("\nThe binary number is : ");
    for(j = i-1;j>=0;j--) {
        printf("%d", a[j]);
    }
    return 0;
}
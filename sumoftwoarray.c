#include<stdio.h>
int main() {
    int a[100],b[100],ab[100],i,n;
    printf("Enter the number of elements of array : ");
    scanf("%d", &n);
    printf("Enter the numbers of first array : ");
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the numbers of second array : ");
    for(i=0;i<n;i++) {
        scanf("%d", &b[i]);
    }
    for(i=0;i<n;i++) {
        ab[i] = a[i] + b[i];
    }
    printf("Value of ab array : ");
    for(i=0;i<n;i++) {
        printf("%d ", ab[i]);
    }

    return 0;
}
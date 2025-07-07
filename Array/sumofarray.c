#include<stdio.h>
int main() {
    int n,arr[100],i,sum = 0;
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter the values : ");
    for(i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0;i < n;i++) {
        sum = sum + arr[i];
    }
    printf("The sum of the given numbers is : %d \n", sum);
    return 0;
}
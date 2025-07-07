#include<stdio.h>
int main() {
    int arr[100],n,i,even_sum=0,odd_sum=0;
    printf("Enter the numbers of array : ");
    scanf("%d", &n);
    printf("Enter the values : ");
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("Input values are : ");
    for(i=0;i<n;i++) {
        printf("%d", arr[i]);
    
        if (arr[i] % 2 ==0) {
            even_sum += arr[i];
        }
        else 
            odd_sum += arr[i];
    }

    printf("\nThe sum of odd numbers : %d", odd_sum);
    printf("\nThe sum of even numbers : %d", even_sum);
    return 0;
}
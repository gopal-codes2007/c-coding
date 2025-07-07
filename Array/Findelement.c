#include<stdio.h>
int main() {
    int arr[100],i,x,n,found=0;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the elements if array : ");
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the which value are you want : ");
    scanf("%d", &x);

    for(i=0;i<n;i++) {
        if(arr[i] == x) {
            found = 1;
            printf("Elements found at index %d\n",i);
        }
    }
    if(found = 0) {
        printf("Element not found at index ");
    }
    return 0;
}
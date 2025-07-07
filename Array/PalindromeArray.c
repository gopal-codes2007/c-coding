#include<stdio.h>
int main() {
    int n,arr[100],i;
    printf("Please enter the size of Array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        printf("Please enter %dth index: ",i);
        scanf("%d", &arr[i]);
    }
    int flag = 1;
    for(i=0;i<n/2;i++) {
        if(arr[i] != arr[(n-1)-i]) {
            flag=0;
            break;
        }
    }

    if(flag==1) {
        printf("Your array is palindrome.");
    }
    else {
        printf("Your array is not palindrome.");
    }
}
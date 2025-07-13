#include<stdio.h>
int main() {
    int arr1[100],arr2[100],n,m;
    printf("Enter the size of first array: ");
    scanf("%d", &n);
    printf("Enter the size of second array: ");
    scanf("%d", &m);
    printf("Enter the elements of first sorted array: ");
    for(int i=0;i<n;i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of second sorted array: ");
    for(int i=0;i<m;i++) {
        scanf("%d", &arr2[i]);
    }
    //This lower code is used in java.
    //while(i<arr1.length || j<arr2.length) {
            //if(j == arr2.length || 
                //(i < arr1.length && arr1[i] < arr2[j])) {
                //newArr[k] = arr1[i];
                //i++;
                //k++;
            //}
            //else {
                //newArr[k] = arr2[j];
                //k++;
                //j++;
            //}
    int newSize = m + n;
    int i=0,j=0,k=0;
    int newArr[newSize];
    while(i<n || j<m) {
        if(j == m || i<n && arr1[i] < arr2[j]) {
            newArr[k] = arr1[i];
            i++;
            k++;
        }
        else {
            newArr[k] = arr2[j];
            k++;
            j++;
        }
    }

    printf("Your new sorted array is: ");
    for(int k=0;k<newSize;k++) {
        printf("%d", newArr[k]);
    }
    return 0;
}
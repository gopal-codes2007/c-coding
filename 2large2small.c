#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max1, max2, min1, min2;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize values
    max1 = max2 = arr[0];
    min1 = min2 = arr[0];

    // Find two largest and two smallest
    for(i = 1; i < n; i++) {
        // Largest
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }

        // Smallest
        if(arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if(arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    printf("Two largest numbers: %d and %d\n", max1, max2);
    printf("Two smallest numbers: %d and %d\n", min1, min2);

    return 0;
}


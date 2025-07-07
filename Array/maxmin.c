#include <stdio.h>

int main() {
    int n, arr[100], max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size. Must be between 1 and 100.\n");
        return 1;
    }

    // Input array elements
    for (int i = 0; i < n; i++) {
        printf("Enter element : ");
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element
    max = min = arr[0];

    // Find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Largest number: %d\n", max);
    printf("Smallest number: %d\n", min);

    return 0;
}

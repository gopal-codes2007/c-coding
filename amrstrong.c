#include <stdio.h>   // Used for input/output functions like printf and scanf
#include <math.h>    // Used for the pow() function to calculate powers

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Ask user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);  // Take input from the user

    originalNum = num;  // Store the original number to use later

    // Step 1: Count how many digits are in the number
    while (originalNum != 0) {
        originalNum /= 10;  // Remove the last digit
        ++n;                // Increase the digit count
    }

    originalNum = num;  // Reset originalNum back to the original number

    // Step 2: Calculate the sum of each digit raised to the power n
    while (originalNum != 0) {
        remainder = originalNum % 10;         // Get the last digit
        result += pow(remainder, n);          // Add (digit ^ number of digits) to result
        originalNum /= 10;                    // Remove the last digit
    }

    // Step 3: Compare result with the original number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

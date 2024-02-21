
#include<stdio.h>

int main() {
    int i, j, isPrime = 1; // Initialize isPrime to 1 assuming the number is prime

    printf("Enter the number to be checked: ");
    scanf("%d", &i);

    // Special case: 1 is not a prime number
    if (i <= 1) {
        isPrime = 0;
    } else {
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // If i is divisible by any number in the range 2 to i/2, it's not prime
                break;
            }
        }
    }

    // Print the result after the loop has finished checking all divisors
    if (isPrime) {
        printf("The number is a prime number.\n");
    } else {
        printf("The number is not a prime number.\n");
    }

    return 0;
}

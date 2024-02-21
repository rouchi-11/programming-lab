#include<stdio.h>

int main() {
    int i, j, sum = 0;

    printf("Enter the number to be checked: ");
    scanf("%d", &i);

    for (j = 1; j < i; j++) {
        if (i % j == 0) {
            printf("\nThe factors are %d", j);
            sum += j; // Increment sum for each factor
        }
    }

    printf("\nThe sum of the factors is %d", sum);

    // Use == for comparison, not =
    if (sum == i) {
        printf("\nThe number is a perfect number: %d", i);
    }

    return 0;
}



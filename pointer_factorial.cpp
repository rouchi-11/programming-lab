#include <stdio.h>

void findFactorial(int num, unsigned long long *factorial) {
    *factorial = 1;

 
    for (int i = 1; i <= num; i++) {
        *factorial *= i;
    }
}

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    findFactorial(num, &factorial);

    printf("Factorial of %d = %llu\n", num, factorial);

    return 0;
}


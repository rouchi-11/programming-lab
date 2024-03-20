#include <stdio.h>

int maxno(int *num1, int *num2) {
    if (*num1 > *num2) {
        return *num1;
    } else {
        return *num2;
    }
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int max = maxno(&num1, &num2);

    printf("The maximum number between %d and %d is: %d\n", num1, num2, max);

    return 0;
}


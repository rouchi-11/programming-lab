#include <stdio.h>


int isPrime(int num, int i) {
    if (num <= 2) {
        return (num == 2) ? 1 : 0;
    }
    if (num % i == 0) {
        return 0;
    }
    if (i * i > num) {
        return 1;
    }
    return isPrime(num, i + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else if (isPrime(num, 2)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}


#include <stdio.h>


int countDigits(int num) {
    if (num == 0) {
        return 0;
    } else {
        return 1 + countDigits(num / 10);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
        printf("Number of digits in %d is %d.\n", num, countDigits(num));
    }

    return 0;
}



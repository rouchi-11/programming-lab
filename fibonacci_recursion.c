#include <stdio.h>

// Function to generate Fibonacci series using recursion
int fibonacci_recursion(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci_recursion(n - 1) + fibonacci_recursion(n - 2);
}

int main() {
    int n, i;

 
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series using recursion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci_recursion(i));
    }

    return 0;
}


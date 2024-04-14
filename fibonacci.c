#include <stdio.h>

// Function to generate Fibonacci series without recursion
void fibonacci_without_recursion(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series without recursion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int n;

    // Input the number of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibonacci_without_recursion(n);

    return 0;
}


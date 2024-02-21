#include <stdio.h>

void mult(int n1, int n2);

int main() {
    int n1, n2;

    printf("Enter numbers: ");
    scanf("%d %d", &n1, &n2);

    
    mult(n1,n2);

    return 0;
}

void mult(int n1, int n2) {
    int f = n1 * n2;
    printf("The sum of %d and %d is: %d\n", n1, n2, f);
}


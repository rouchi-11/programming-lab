#include <stdio.h>

// Function to swap two numbers using call by value
void swapByValue(int a, int b)
{
    int temp;
temp = a;
    a = b;
    b = temp;
    printf("After swap by value: a=%d & b=%d\n", a, b);
}
// Function to swap two numbers using call by reference
void swapByReference(int *a, int *b)
{
int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swap by reference: a=%d & b=%d\n",*a,*b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Original numbers are: a=%d & b=%d\n", a, b);

    swapByValue(a, b);
    swapByReference(&a, &b);

    return 0;
}


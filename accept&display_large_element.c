#include <stdio.h>

int main() {
    int n, i;
    
    // Input the number of elements from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input elements from user and store them in the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize the largest element as the first element of the array
    int largest = arr[0];

    // Loop through the array to find the largest element
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Display the largest element
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}


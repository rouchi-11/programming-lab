#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n;int i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    reverseArray(arr, n);
    
    printf("\nArray after reversing: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}


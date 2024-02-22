#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = arr[0];
    int i;
    
    for ( i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    
    if (secondLargest == arr[0]) {
        printf("There is no second largest element.\n");
        return -1;
    }

    return secondLargest;
}

int main() {
    int size;int i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements in the array: ", size);
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int secondLargest = findSecondLargest(arr, size);
    if (secondLargest != -1) {
        printf("The second largest element in the array is: %d\n", secondLargest);
    }

    return 0;
}


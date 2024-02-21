#include <stdio.h>

void findTwoLargest(int arr[], int size) {
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

    printf("The two largest elements in the array are: %d and %d\n", largest, secondLargest);
}

int main() {
    int size ;int i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    
    printf("Enter %d elements in the array: ", size);
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findTwoLargest(arr, size);

    return 0;
}


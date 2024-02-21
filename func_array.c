#include <stdio.h>


void P_array(int arr[], int size);

int main()
{
    int array[5] = {1, 2, 3, 4, 5};

P_array(array, 5);

    return 0;
}


void P_array(int arr[], int size) 
{
	int i;
    printf("Elements of the array are: ");
    for ( i = 0; i < size; i++)
	 {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


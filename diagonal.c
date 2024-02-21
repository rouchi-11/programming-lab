#include <stdio.h>

#define MAX_SIZE 10

void printDiagonalElements(int mat[][MAX_SIZE], int size) {
    printf("Diagonal elements of the matrix:\n");
    int i;
    for ( i = 0; i < size; i++) {
        printf("%d ", mat[i][i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[MAX_SIZE][MAX_SIZE];
    int i,j;

    printf("Enter elements of the matrix (%d x %d):\n", size, size);
    for ( i = 0; i < size; i++) {
        for ( j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printDiagonalElements(matrix, size);

    return 0;
}


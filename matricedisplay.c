#include <stdio.h>

void addMatrices()
int mat1[][COLS], int mat2[][COLS], int result[][COLS], int rows, int cols
 {
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int mat[][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols,i,j;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    printf("Enter elements of matrix 1 (%d x %d):\n", rows, cols);
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2 (%d x %d):\n", rows, cols);
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    addMatrices(matrix1, matrix2, result, rows, cols);

    printf("\nMatrix 1:\n");
    displayMatrix(matrix1, rows, cols);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2, rows, cols);

    printf("\nSum of the matrices:\n");
    displayMatrix(result, rows, cols);

    return 0;
}


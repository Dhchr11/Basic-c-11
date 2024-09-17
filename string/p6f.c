//6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 
#include <stdio.h>

void addMatrices(int rows, int cols, int a[rows][cols], int b[rows][cols], int result[rows][cols]) 
{
	int i;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void   
 subtractMatrices(int rows, int cols, int a[rows][cols], int b[rows][cols], int result[rows][cols]) 
 {
 	int i;
    for (i = 0; i < rows; i++) {
    	int j;
        for (j = 0; j < cols; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void   
 multiplyMatrices(int rowsA, int colsA, int a[rowsA][colsA], int rowsB, int colsB, int b[rowsB][colsB], int result[rowsA][colsB])   
 {
 	int i,j;
    for (i = 0; i < rowsA; i++) {
        for ( j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
	int i,j;
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");   

    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns:   
 ");
    scanf("%d %d", &rows, &cols);

    int matrixA[rows][cols], matrixB[rows][cols], result[rows][cols];

    printf("Enter elements of matrix A:\n");
    int i,j;
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    int i;
    for (i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrixB[i][j]);   

        }
    }

    addMatrices(rows, cols, matrixA, matrixB, result);
    printf("Addition:\n");
    printMatrix(rows, cols, result);

    subtractMatrices(rows, cols, matrixA, matrixB, result);
    printf("Subtraction:\n");
    printMatrix(rows, cols, result);

    multiplyMatrices(rows, cols, matrixA, rows, cols, matrixB, result);
    printf("Multiplication:\n");
    printMatrix(rows, cols, result);

    return 0;
}


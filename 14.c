#include <stdio.h>

// Function to add two matrices and store the result in a third matrix
void addMatrices(int (*matrix1)[3], int (*matrix2)[3], int (*resultMatrix)[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Add corresponding elements from both matrices
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to display a 3x3 matrix
void displayMatrix(int (*matrix)[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3], matrix2[3][3], resultMatrix[3][3];

    // Input the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add matrices using the function
    addMatrices(matrix1, matrix2, resultMatrix);

    // Display the original matrices and the result matrix
    printf("\nMatrix 1:\n");
    displayMatrix(matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);

    printf("\nResult Matrix (Sum of Matrix 1 and Matrix 2):\n");
    displayMatrix(resultMatrix);

    return 0;
}

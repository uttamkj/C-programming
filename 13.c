#include <stdio.h>

// Function to calculate sum and average of a 3x3 matrix
void calculateSumAndAverage(int (*matrix)[3], int *sum, float *average) {
    *sum = 0;
    
    // Calculate the sum
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *sum += matrix[i][j];
        }
    }

    // Calculate the average
    *average = (float)(*sum) / 9.0;
}

int main() {
    int matrix[3][3];
    int sum;
    float average;

    // Input a 3x3 matrix
    printf("Enter elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum and average using the function
    calculateSumAndAverage(matrix, &sum, &average);

    // Display the sum and average
    printf("\nSum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);

    return 0;
}

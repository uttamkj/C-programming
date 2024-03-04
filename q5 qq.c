#include <stdio.h>

// Define the COMPLEX structure
struct COMPLEX {
    float REAL;
    float IMAGINARY;
};

// Function to add two complex numbers
struct COMPLEX add(struct COMPLEX num1, struct COMPLEX num2) {
    struct COMPLEX result;
    result.REAL = num1.REAL + num2.REAL;
    result.IMAGINARY = num1.IMAGINARY + num2.IMAGINARY;
    return result;
}

// Function to subtract two complex numbers
struct COMPLEX subtract(struct COMPLEX num1, struct COMPLEX num2) {
    struct COMPLEX result;
    result.REAL = num1.REAL - num2.REAL;
    result.IMAGINARY = num1.IMAGINARY - num2.IMAGINARY;
    return result;
}

// Function to multiply two complex numbers
struct COMPLEX multiply(struct COMPLEX num1, struct COMPLEX num2) {
    struct COMPLEX result;
    result.REAL = num1.REAL * num2.REAL - num1.IMAGINARY * num2.IMAGINARY;
    result.IMAGINARY = num1.REAL * num2.IMAGINARY + num1.IMAGINARY * num2.REAL;
    return result;
}

// Function to divide two complex numbers
struct COMPLEX divide(struct COMPLEX num1, struct COMPLEX num2) {
    struct COMPLEX result;
    float denominator = num2.REAL * num2.REAL + num2.IMAGINARY * num2.IMAGINARY;
    result.REAL = (num1.REAL * num2.REAL + num1.IMAGINARY * num2.IMAGINARY) / denominator;
    result.IMAGINARY = (num1.IMAGINARY * num2.REAL - num1.REAL * num2.IMAGINARY) / denominator;
    return result;
}

int main() {
    struct COMPLEX num1, num2, result;
    int choice;

    // Input for the first complex number
    printf("Enter the real part of the first complex number: ");
    scanf("%f", &num1.REAL);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%f", &num1.IMAGINARY);

    // Input for the second complex number
    printf("Enter the real part of the second complex number: ");
    scanf("%f", &num2.REAL);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%f", &num2.IMAGINARY);

    // Menu-driven program
    printf("\nMenu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Perform the selected operation
    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Sum: %.2f + %.2fi\n", result.REAL, result.IMAGINARY);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Difference: %.2f + %.2fi\n", result.REAL, result.IMAGINARY);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Product: %.2f + %.2fi\n", result.REAL, result.IMAGINARY);
            break;
        case 4:
            result = divide(num1, num2);
            printf("Quotient: %.2f + %.2fi\n", result.REAL, result.IMAGINARY);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

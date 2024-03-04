#include <stdio.h>

// Define the structure
struct Point {
    int x;
    int y;
};

// Function to swap values of two Point structures using pointers
void swapPoints(struct Point *p1, struct Point *p2) {
    struct Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    // Declare two Point structures
    struct Point point1, point2;

    // Initialize values for point1
    printf("Enter coordinates for point1 (x y): ");
    scanf("%d %d", &point1.x, &point1.y);

    // Initialize values for point2
    printf("Enter coordinates for point2 (x y): ");
    scanf("%d %d", &point2.x, &point2.y);

    // Display the values before swapping
    printf("\nBefore swapping:\n");
    printf("Point1: (%d, %d)\n", point1.x, point1.y);
    printf("Point2: (%d, %d)\n", point2.x, point2.y);

    // Call the function to swap the values
    swapPoints(&point1, &point2);

    // Display the values after swapping
    printf("\nAfter swapping:\n");
    printf("Point1: (%d, %d)\n", point1.x, point1.y);
    printf("Point2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}

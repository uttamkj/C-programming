#include <stdio.h>
#include <math.h>

// This function will work recursive
float CheckArmstrong(int x, int size) {
    if (x > 0)
        return (pow( x%10, size) + CheckArmstrong(x/10, size));
}

// It's the driver function
int main() {
    int x; // To store the input number
    int y, size = 0;

    printf("-----Enter the integer number-----\n");
    scanf("%d", &x);

    y = x;

    for (y = x; y != 0; ++size) {
        y /= 10;
    }

    if ((int) CheckArmstrong(x, size) == x) {
        printf("%d is an Armstrong number.\n", x);
    } else {
        printf("%d is not an Armstrong number.\n", x);
    }
    return 0;
}
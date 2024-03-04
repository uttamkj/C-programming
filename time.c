#include <stdio.h>

// Structure to represent time
struct Time {
    int hr;
    int min;
    int sec;
};

// Function to add two time values
struct Time addTimes(struct Time t1, struct Time t2) {
    struct Time result ;
    result.sec = t1.sec + t2.sec;

    // Carry over extra seconds to minutes
    result.min = result.sec / 60;
    result.sec = result.sec % 60;

    // Add minutes *************************************************
    result.min += t1.min + t2.min;

    // Carry over extra minutes to hours
    result.hr = result.min / 60;
    result.min = result.min % 60;

    // Add hours
    result.hr += t1.hr + t2.hr;

    return result;
}

int main() {
    struct Time time1, time2, result;

    // Input for the first time
    printf("Enter first time (hh:mm:ss): ");
    scanf("%d:%d:%d", &time1.hr, &time1.min, &time1.sec);

    // Input for the second time
    printf("Enter second time (hh:mm:ss): ");
    scanf("%d:%d:%d", &time2.hr, &time2.min, &time2.sec);

    // Add the times
    result = addTimes(time1, time2);

    // Display the result
    printf("\nSum of times: %02d:%02d:%02d\n", result.hr, result.min, result.sec);

    return 0;
}

#include <stdio.h>
#include <time.h>

// Structure to represent date
struct Date {
    int day;
    int month;
    int year;
};

// Function to calculate current age
int calculateAge(struct Date birthdate) {
    time_t currentTime;
    struct tm *localTime;

    // Get current time
    time(&currentTime);
    localTime = localtime(&currentTime);

    // Calculate age
    int age = localTime->tm_year + 1900 - birthdate.year;

    // Adjust age if the birthday has not occurred yet this year
    if (localTime->tm_mon + 1 < birthdate.month || 
        (localTime->tm_mon + 1 == birthdate.month && localTime->tm_mday < birthdate.day)) {
        age--;
    }

    return age;
}

int main() {
    struct Date birthdate;
    int age;

    // Input for birthdate
    printf("Enter birthdate (dd:mm:yyyy): ");
    scanf("%d:%d:%d", &birthdate.day, &birthdate.month, &birthdate.year);

    // Calculate the age
    age = calculateAge(birthdate);

    // Display the result
    printf("\nCurrent age: %d years\n", age);

    return 0;
}

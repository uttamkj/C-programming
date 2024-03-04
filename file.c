#include <stdio.h>

int main() {
    // Create a file pointer
    FILE *filePointer;

    // Open the file in write mode
    filePointer = fopen("student_info.txt", "w");

    // Check if the file is opened successfully
    if (filePointer == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    char firstName[50], lastName[50];
    int rollNumber;

    // Input first name, last name, and roll number from the user
    printf("Enter first name: ");
    fgets(firstName, sizeof(firstName), stdin);

    printf("Enter last name: ");
    fgets(lastName, sizeof(lastName), stdin);

    printf("Enter roll number: ");
    scanf("%d", &rollNumber);

    // Write name and roll number to the file
    fprintf(filePointer, "Name: %s %s", firstName, lastName);
    fprintf(filePointer, "Roll Number: %d\n", rollNumber);

    // Close the file
    fclose(filePointer);

    // Open the file in read mode
    filePointer = fopen("student_info.txt", "r");

    // Check if the file is opened successfully
    if (filePointer == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    // Display the content of the file
    printf("\nContent of the file:\n");
    char ch;
    while ((ch = fgetc(filePointer)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(filePointer);

    return 0;
}

#include <stdio.h>
#include <string.h>

// Structure declaration
struct Student {
    int rollno;
    char name[50];
    float cgpa;
};

// Function to swap two students
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort on an array of students based on cgpa
void sortStudents(struct Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].cgpa > arr[j + 1].cgpa) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;

    // Input: Number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of students
    struct Student students[n];

    // Input: Student details
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }

    // Sort the array of students based on cgpa
    sortStudents(students, n);

    // Display sorted student details
    printf("\nSorted Student Details based on CGPA:\n");
    printf("%-15s %-25s %-10s\n", "Roll Number", "Name", "CGPA");
    for (int i = 0; i < n; i++) {
        printf("%-15d %-25s %-10.2f\n", students[i].rollno, students[i].name, students[i].cgpa);
    }

    return 0;
}

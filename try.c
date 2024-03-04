#include <stdio.h>
#include <string.h>

// Define a structure for a student
struct Student {
    char name[50];
    char sex;
    int rollNumber;
    int totalMarks;
    int subjectMarks[3]; // Assuming there are 3 subjects
};

// Function to display student details
void displayStudent(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Sex: %c\n", student.sex);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Total Marks: %d\n", student.totalMarks);
    
    printf("Subject Marks: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", student.subjectMarks[i]);
    }
    
    printf("\n\n");
}

// Function to swap two students
void swapStudents(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort on an array of students based on total marks
void sortByMarks(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].totalMarks > students[j + 1].totalMarks) {
                swapStudents(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    // Declare an array of 10 students
    struct Student students[10];

    // Input details for each student
    for (int i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Sex (M/F): ");
        scanf(" %c", &students[i].sex);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks for 3 subjects:\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].subjectMarks[j]);
        }

        // Calculate total marks
        students[i].totalMarks = 0;
        for (int j = 0; j < 3; j++) {
            students[i].totalMarks += students[i].subjectMarks[j];
        }

        // Consume the newline character left in the input buffer
        getchar();

        printf("\n");
    }

    // Sort students by total marks
    sortByMarks(students, 10);

    // Display the names of students in ascending order of total marks
    printf("Students in ascending order of total marks:\n");
    for (int i = 0; i < 10; i++) {
        displayStudent(students[i]);
    }

    return 0;
}

#include <stdio.h>

// Define a structure to store student details
struct Student {
    int rollNumber;
    char name[50];
    int age;
    float marks;
};

int main() {
    int n, i;

    // Ask the user how many students to enter
    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for number of students.\n");
        return 1;
    }

    // Declare an array of structures
    struct Student students[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter Name: ");
        scanf("%s", students[i].name); // Note: reads a single word name

        printf("Enter Age: ");
        scanf("%d", &students[i].age);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\n--------------------------------------------------\n");
    printf("                 STUDENT RECORDS                  \n");
    printf("--------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number : %d\n", students[i].rollNumber);
        printf("Name        : %s\n", students[i].name);
        printf("Age         : %d\n", students[i].age);
        printf("Marks       : %.2f\n", students[i].marks);
    }

    printf("\n--------------------------------------------------\n");
    return 0;
}

#include <stdio.h>

int main() {
    int i;
    float marks[5];
    char grades[5];

    printf("Enter the marks of 5 students:\n");

    // Input marks of each student
    for(i = 0; i < 5; i++) {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    // Calculate and store the grade of each student in the grades array
    for(i = 0; i < 5; i++) {
        if (marks[i] >= 90) {
            grades[i] = 'A';
        }
        else if (marks[i] >= 80) {
            grades[i] = 'B';
        }
        else if (marks[i] >= 70) {
            grades[i] = 'C';
        }
        else if (marks[i] >= 60) {
            grades[i] = 'D';
        }
        else if (marks[i] >= 50) {
            grades[i] = 'E';
        }
        else {
            grades[i] = 'F';
        }
    }

    // Display the grade of each student
    printf("\nGrades:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d: %c\n", i + 1, grades[i]);
    }

    return 0;
}
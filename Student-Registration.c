#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int age;
    int id;
};

struct Student students[MAX_STUDENTS];
int totalStudents = 0;

void registerStudent() {
    if (totalStudents < MAX_STUDENTS) {
        printf("Enter student name: ");
        scanf("%s", students[totalStudents].name);

        printf("Enter student age: ");
        scanf("%d", &students[totalStudents].age);

        students[totalStudents].id = totalStudents + 1;

        printf("Student successfully registered. Student ID: %d\n", students[totalStudents].id);

        totalStudents++;
    } else {
        printf("Registration limit reached.\n");
    }
}

void displayStudents() {
    printf("List of registered students:\n");
    for (int i = 0; i < totalStudents; i++) {
        printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
    }
}

int main() {
    int choice;

    do {
        printf("\nStudent's Registration System\n");
        printf("1. Register Student\n");
        printf("2. Display Registered Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}

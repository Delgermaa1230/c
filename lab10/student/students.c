#include "students.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student* createStudents(int n) {
    return (struct Student*)malloc(n * sizeof(struct Student));
}

void readStudents(struct Student *students, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d deh suragchiin ner, dugaar, dun : ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].number, &students[i].grade);
    }
}

void printStudents(struct Student *students, int n) {
    printf("Suragchdiin medeelel:\n");
    printf("%-20s %-10s %-5s\n", "Ner", "Dugaar", "Dun");
    for (int i = 0; i < n; i++) {
        printf("%-20s %-10d %-5.2f\n", students[i].name, students[i].number, students[i].grade);
    }
}

void printStudentByName(struct Student *students, int n, const char *name) {
    printf("%s nertei suragchiin medeelel:\n", name);
    printf("%-20s %-10s %-5s\n", "Ner", "Dugaar", "Dun");
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("%-20s %-10d %-5.2f\n", students[i].name, students[i].number, students[i].grade);
            return;
        }
    }
    printf("Suragch oldgsongui.\n");
}

void printStudentByNumber(struct Student *students, int n, int number) {
    printf("%d dugaarttai suragchiin medeelel:\n", number);
    printf("%-20s %-10s %-5s\n", "Ner", "Dugaar", "Dun");
    for (int i = 0; i < n; i++) {
        if (students[i].number == number) {
            printf("%-20s %-10d %-5.2f\n", students[i].name, students[i].number, students[i].grade);
            return;
        }
    }
    printf("Suragch oldgsongui.\n");
}

void sortByName(struct Student *students, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void sortByNumber(struct Student *students, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].number > students[j + 1].number) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void sortByGrade(struct Student *students, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].grade < students[j + 1].grade) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void deleteStudents(struct Student *students) {
    free(students);
}

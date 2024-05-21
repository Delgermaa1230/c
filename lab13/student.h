#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 200
#define MAX_NAME_LENGTH 20

struct Student {
    char fname[MAX_NAME_LENGTH];
    int age;
    float gpa;
};
typedef struct Student Student;

void print_students(Student a[], int n);
void print(Student *st);
void printStudentByName(Student *students, int n, const char *name);
void printStudentByAge(Student *students, int n, int age);
void printStudentByGPA(Student *students, int n, float gpa);
void sortByName(Student *students, int n);
void sortByAge(Student *students, int n);
void sortByGPA(Student *students, int n);

#endif // STUDENT_H



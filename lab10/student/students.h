#ifndef STUDENTS_H
#define STUDENTS_H

struct Student {
    char name[50];
    int number;
    float grade;
};

struct Student* createStudents(int n);
void readStudents(struct Student *students, int n);
void printStudents(struct Student *students, int n);
void printStudentByName(struct Student *students, int n, const char *name);
void printStudentByNumber(struct Student *students, int n, int number);
void sortByName(struct Student *students, int n);
void sortByNumber(struct Student *students, int n);
void sortByGrade(struct Student *students, int n);
void deleteStudents(struct Student *students);

#endif

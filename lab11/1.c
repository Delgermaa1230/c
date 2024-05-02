#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    int grade;
} Student;

void readData(const char *filename, Student students[], int *numStudents) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    fscanf(file, "%d", numStudents);

    for (int i = 0; i < *numStudents; ++i) {
        fscanf(file, "%s %d %d", students[i].name, &students[i].age, &students[i].grade);
    }

    fclose(file);
}

void writeData(const char *filename, Student students[], int numStudents) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    fprintf(file, "%d\n", numStudents);
    for (int i = 0; i < numStudents; ++i) {
        fprintf(file, "%s %d %d\n", students[i].name, students[i].age, students[i].grade);
    }

    fclose(file);
}

void selectionSort(Student students[], int numStudents) {
    for (int i = 0; i < numStudents - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < numStudents; ++j) {
            if (students[j].grade > students[maxIndex].grade) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            Student temp = students[i];
            students[i] = students[maxIndex];
            students[maxIndex] = temp;
        }
    }
}

void bubbleSort(Student students[], int numStudents) {
    //  dasgal 2 eremblegdsen esehiig shalgah swapped huvisagchiig ashiglasan
    int swapped;
    for (int i = 0; i < numStudents - 1; ++i) {
        swapped = 0;
        for (int j = 0; j < numStudents - i - 1; ++j) {
            if (students[j].grade < students[j + 1].grade) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void insertionSort(Student students[], int numStudents) {
    for (int i = 1; i < numStudents; ++i) {
        Student key = students[i];
        int j = i - 1;
        while (j >= 0 && students[j].grade < key.grade) {
            students[j + 1] = students[j];
            j = j - 1;
        }
        students[j + 1] = key;
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int numStudents;

    readData("students.txt", students, &numStudents);

    selectionSort(students, numStudents);
    writeData("output/selection_sorted.txt", students, numStudents);

    bubbleSort(students, numStudents);
    writeData("output/bubble_sorted.txt", students, numStudents);

    insertionSort(students, numStudents);
    writeData("output/insertion_sorted.txt", students, numStudents);

    return 0;
}

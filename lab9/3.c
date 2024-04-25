#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data {
    char name[12];
    int grade;
};

void readData(struct Data students[], int n) {
    FILE *file = fopen("inputFiles/data.bin", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(-1);
    }

    fread(students, sizeof(struct Data), n, file);
    fclose(file);
}

void sortGPA(struct Data students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].grade < students[j + 1].grade) {
                struct Data temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int findRank(const struct Data students[], int n, const char *id) {
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, id) == 0) {
            return i + 1; 
        }
    }
    return -1;
}

int main() {
    const int numStudents = 52;
    struct Data students[numStudents];

    readData(students, numStudents);

    sortGPA(students, numStudents);

    printf("Suragchdiin medeelel:\n");
    printf("%s                   %s\n", "ID", "Dun");
    printf("------------------------\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s           %d\n", students[i].name, students[i].grade);
    }

    char id[12];
    printf("\nID oruul: ");
    scanf("%s", id);

    int rank = findRank(students, numStudents, id);

    if (rank != -1) {
        printf("Ezeljiga bair: %d\n", rank);
    } else {
        printf("Oldsongui.\n");
    }

    return 0;
}

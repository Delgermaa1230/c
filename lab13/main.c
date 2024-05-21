#include "student.h"

int main() {
    int n, cmd, i;
    //student structure ийн a array зарлаж байна
    Student a[MAX_STUDENTS];
    
    //файлыг нээнэ
    FILE *fin = fopen("students.txt", "r");
    if (!fin) {
        printf("Input file error!\n");
        exit(-1);
    }
    fscanf(fin, "%d", &n);
    // файлаас датагаа авна
    for (i = 0; i < n; i++) {
        fscanf(fin, "%s %d %f", a[i].fname, &a[i].age, &a[i].gpa);
    }
    fclose(fin);
    //сурагчдыг бүгдийг нь хэвлэнэ
    print_students(a, n);

    char name[MAX_NAME_LENGTH];
    int age;
    float gpa;
    // while loop ашиглан үйлдлүүдийг давтана
    while (1) {
        printf("1: nereer haih, \n2: nasaar haih, \n3: dungeer haih,\n4: dungeer erembeleh, \n5: nasaar erembeleh, \n6: nereer erembeleh, \n7: Bugdiin hevleh, \n8: garah\n");
        scanf("%d", &cmd);
        if (cmd == 1) {
            printf("Enter Name: ");
            scanf("%s", name);
            printStudentByName(a, n, name);
        } else if (cmd == 2) {
            printf("Enter Age: ");
            scanf("%d", &age);
            printStudentByAge(a, n, age);
        } else if (cmd == 3) {
            printf("Enter GPA: ");
            scanf("%f", &gpa);
            printStudentByGPA(a, n, gpa);
        } else if (cmd == 4) {
            sortByGPA(a, n);
            print_students(a, n);
        } else if (cmd == 5) {
            sortByAge(a, n);
            print_students(a, n);
        } else if (cmd == 6) {
            sortByName(a, n);
            print_students(a, n);
        } else if (cmd == 7) {
            print_students(a, n);
        } else {
            break;
        }
    }

    return 0;
}

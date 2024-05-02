#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    int age;
    float gpa;
};
typedef struct Student Student;

int sortGPA(Student a[], int n);

int main() {
    Student a[200];
    FILE *fin = NULL;
    FILE *fout = NULL;
    fin = fopen("students.txt", "r");
    fout = fopen("output/output2.txt", "w");
    if (!fin || !fout) {
        printf("Error opening files!\n");
        exit(-1);
    }

    int i, n;
    fscanf(fin, "%d", &n);

    for (i = 0; i < n; i++) {
        fscanf(fin, "%s %d %f", a[i].name, &a[i].age, &a[i].gpa);
    }
    fclose(fin);

    sortGPA(a, n);

    for (i = 0; i < n; i++)
             printf("%3.1f\t%d\t%s\n", a[i].gpa, a[i].age, a[i].name);
    
//    sortGPA(a, n) хийсэн үр дүнг файлд бичиж хадгалах,Тэгэхдээ дүнг нь эхний багананд хадгалах
    for (i = 0; i < n; i++) {
        fprintf(fout, "%.1f\t%s\t%d\n", a[i].gpa, a[i].name, a[i].age);
         

    }
    fclose(fout);

    printf("Sorted data output2.txt -t hadgalagdsan\n");

    return 0;
}

int sortGPA(Student a[], int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].gpa < a[j + 1].gpa) {
                Student temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return 0;
}

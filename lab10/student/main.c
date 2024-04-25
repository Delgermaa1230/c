#include <stdio.h>
#include "students.h"

int main() {
    int n;
    printf("Suragchdiin toog oruul: ");
    scanf("%d", &n);

    struct Student *students = createStudents(n);
    readStudents(students, n);
    printStudents(students, n);

    sortByName(students, n);
    printf("\nSuragchdiin nereer n jagsaasan n:\n");
    printStudents(students, n);

    sortByNumber(students, n);
    printf("\nSuragchdiig dugaaraar n jagsaasan n:\n");
    printStudents(students, n);

    sortByGrade(students, n);
    printf("\nSuragchdiig dungeer n jagsaasan n:\n");
    printStudents(students, n);

    char name[50];
    printf("\nHaih suragchiin neriig oruulna uu: ");
    scanf("%s", name);
    printStudentByName(students, n, name);

    int dugaar;
    printf("\nHaih suragchiin dugaariig oruulna uu: ");
    scanf("%d", &dugaar);
    printStudentByNumber(students, n, dugaar);


}
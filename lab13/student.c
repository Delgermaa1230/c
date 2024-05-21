#include "student.h"

void print_students(Student a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        print(&a[i]);
    }
}

void print(Student *st)
{
    printf("Name: %s\n", st->fname);
    printf("Age: %d\n", st->age);
    printf("Grade: %.1f\n", st->gpa);
}

int compareByName(const void *a, const void *b)
{
    return strcmp(((Student *)a)->fname, ((Student *)b)->fname);
}

int compareByAge(const void *a, const void *b)
{
    return ((Student *)a)->age - ((Student *)b)->age;
}

int compareByGPA(const void *a, const void *b)
{
    float diff = ((Student *)b)->gpa - ((Student *)a)->gpa;
    return (diff > 0) - (diff < 0);
}

void sortByName(Student *students, int n)
{
    qsort(students, n, sizeof(Student), compareByName);
}

void sortByAge(Student *students, int n)
{
    qsort(students, n, sizeof(Student), compareByAge);
}

void sortByGPA(Student *students, int n)
{
    qsort(students, n, sizeof(Student), compareByGPA);
}

void printStudentByName(Student *students, int n, const char *name)
{
    // Bsearch хийхийс өмнө нэрээр эрэмбэлнэ.
    sortByName(students, n);

    // student бүтцийн key structure зарлаж байна.
    Student key;

    // key structure fname утгад хайх name утгыг өгөөд төгсгөлд нь \0 залган төгсгөнө.
    strncpy(key.fname, name, sizeof(key.fname) - 1);
    key.fname[sizeof(key.fname) - 1] = '\0';

    // result pointer т bsearch утгыг хадгална.
    Student *result = bsearch(&key, students, n, sizeof(Student), compareByName);

    // олдсон бол хэвлэнэ.
    if (result)
    {
        print(result);
        int index = result - students;

        // олдсон сурагчаас өмнөх сурагчид дотор ижил нэртэй сурагч байсан эсэх
        for (int i = index - 1; i >= 0 && strcmp(students[i].fname, name) == 0; i--)
        {
            print(&students[i]);
        }

        // олдсон сурагчаас хойших сурагчид дотор ижил нэртэй сурагч байсан эсэх
        for (int i = index + 1; i < n && strcmp(students[i].fname, name) == 0; i++)
        {
            print(&students[i]);
        }
    }
    else
    {
        printf("%s nertei suragch oldsongui.\n", name);
    }
}

void printStudentByGPA(Student *students, int n, float gpa) {
    // Хайлт хийхээс өмнө эрэмбэлэх
    sortByGPA(students, n);

    // хайх түлхүүрээ
    Student key;
    key.gpa = gpa;

    // result pointer т bsearch утгыг хадгална.
    Student *result = bsearch(&key, students, n, sizeof(Student), compareByGPA);

    // Хэрэв сурагч олдохгүй бол
    if (!result) {
        printf("%.1f duntei suragch oldsongui.\n", gpa);
        return;
    }

    // Сурагч олдсог бол хэвлэх
    print(result);

    // олдсон сурагчийн индексийг олох
    int index = result - students;

    // олдсон сурагчаас өмнөх сурагчид дотор ижил нэртэй сурагч байсан эсэх
    for (int i = index - 1; i >= 0 && students[i].gpa == gpa; i--) {
        print(&students[i]);
    }

    // олдсон сурагчаас хойших сурагsчид дотор ижил нэртэй сурагч байсан эсэх
    for (int i = index + 1; i < n && students[i].gpa == gpa; i++) {
        print(&students[i]);
    }
}

void printStudentByAge(Student *students, int n, int age)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (students[i].age == age)
        {
            print(&students[i]);
            found = 1;
        }
    }
    if (!found)
    {
        printf("%d nastai suragch oldsongui.\n", age);
    }
}
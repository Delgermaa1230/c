#include <stdio.h>
#include <string.h>

struct Student {
    char fname[20], lname[20], id[10];
    float golch;
};

typedef struct Student Student;

void read_students(Student a[], int n) {
    printf("Suragchiin medeelliig oruulna uu:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("FName: ");
        scanf("%s", a[i].fname);
        printf("LName: ");
        scanf("%s", a[i].lname);
        printf("ID: ");
        scanf("%s", a[i].id);
        printf("Golch: ");
        scanf("%f", &a[i].golch);
    }
}

void print_students(Student a[], int n) {
    printf("Suragchiin medeelel:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Ner: %s\n", a[i].fname);
        printf("Ovog: %s\n", a[i].lname);
        printf("ID: %s\n", a[i].id);
        printf("Golch: %.2f\n", a[i].golch);
    }
}

void print(Student st) {
    printf("Ner: %s\n", st.fname);
    printf("Ovog: %s\n", st.lname);
    printf("Id: %s\n,", st.id);
    printf("Golch: %.2f\n", st.golch);
}

int search_by_fname(Student a[], int n, char fname[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].fname, fname) == 0) {
            return i; 
        }
    }
    return -1; 
}

int search_by_lname(Student a[], int n, char lname[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].lname, lname) == 0) {
            return i; 
        }
    }
    return -1; 
}

int search_by_id(Student a[], int n, char id[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].id, id) == 0) {
            return i; 
        }
    }
    return -1; 
}

int search_by_golch(Student a[], int n, float golch) {
    for (int i = 0; i < n; i++) {
        if (a[i].golch == golch) {
            return i; 
        }
    }
    return -1; 
}

void sort_by_golch(Student a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].golch < a[j + 1].golch) {
                Student temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    Student a[100];
    int n, cmd, idx;
    printf("Oyutnii too: ");
    scanf("%d", &n);
    read_students(a, n);
    print_students(a, n);
    char fname[20], lname[20], id[20];
    float golch;
    while (1) {
        printf("1: Nereer haih\n2: Ovgoor haih\n3: ID-aar haih\n4: golchoor haih\n5: Golchoor erembleh\n6: Hevleh\n7: Garah\n");
        scanf("%d", &cmd);
        if (cmd == 1) {
            printf("Haih ner: ");
            scanf("%s", fname);
            idx = search_by_fname(a, n, fname);
            if (idx == -1)
                printf("Oyutan oldsongio\n");
            else
                print(a[idx]);
        } else if (cmd == 2) {
            printf("Haih ovog: ");
            scanf("%s", lname);
            idx = search_by_lname(a, n, lname);
            if (idx == -1)
                printf("Oyutan oldsongio\n");
            else
                print(a[idx]);
        } else if (cmd == 3) {
            printf("Haih id: ");
            scanf("%s", id);
            idx = search_by_id(a, n, id);
            if (idx == -1)
                printf("Oyutan oldsongio\n");
            else
                print(a[idx]);
        } else if (cmd == 4) {
            printf("Haih golch: ");
            scanf("%f", &golch);
            idx = search_by_golch(a, n, golch);
            if (idx == -1)
                printf("Oyutan oldsongio\n");
            else
                print(a[idx]);
        } else if (cmd == 5) {
            sort_by_golch(a, n);
            print_students(a, n);
        } else if (cmd == 6) {
            print_students(a, n);
        } else {
            break;
        }
    }
    return 0;
}



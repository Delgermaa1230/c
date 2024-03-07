#include <stdio.h>

int main () {
    int n, A[100];

    printf("A iin hemjee n iig oruulna uu: ");
    scanf("%d", &n);

    printf("A giin %d shirheg toog oruulna uu: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    int usuhErembe = 1;
    for (int i = 1; i < n; i++) {
        if (A[i] < A[i-1]) {
            usuhErembe = 0;
            break;
        }
    }

    int buurahErembe = 1;
    for (int i = 1; i < n; i++) {
        if (A[i] > A[i-1]) {
            buurahErembe = 0;
            break;
        }
    }

    if (usuhErembe) {
        printf("Usuhuur erembelegdsen");
    } else if (buurahErembe) {
        printf("Buurahaar erembelegdsen");
    } else {
        printf( "Erembelegdeegui" );
    }
}
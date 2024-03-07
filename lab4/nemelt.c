#include <stdio.h>

int main() {
    int n, m;

    printf("A array urt n iig oruulna uuu: ");
    scanf("%d", &n);

    int A[n];

    printf("A array %d shirheg elementiig oruulna uu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("B array urt m- iig oruulna uu: ");
    scanf("%d", &m);

    int B[m];

    printf("B array %d shirheg toog oruulna uu:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    printf("B array -d baigaa A array iin elementuud:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                break; 
            }
        }
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int isPresent(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N], B[M];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    int C[N + M]
    ;
    int CSize = 0;

    for (int i = 0; i < N; i++) {
        if (!isPresent(C, CSize, A[i])) {
            C[CSize++] = A[i];
        }
    }

    for (int i = 0; i < M; i++) {
        if (!isPresent(C, CSize, B[i])) {
            C[CSize++] = B[i];
        }
    }

    for (int i = 0; i < CSize; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

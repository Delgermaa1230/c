#include <stdio.h>

int main() {
    int N;

    printf("Husnegtiin hemjee N iig oruulna uu: ");
    scanf("%d", &N);

    int table[N][N];

    printf(" %d x %d shirheg toog oruulna uu:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &table[i][j]);
        }
    }

    int rowSum[N];
    int colSum[N];
    int leftDiagSum = 0;
    int rightDiagSum = 0;
    for (int i = 0; i < N; i++) {
        rowSum[i] = 0; 
        colSum[i] = 0; 
        for (int j = 0; j < N; j++) {
            rowSum[i] += table[i][j];
            colSum[i] += table[j][i];
            if (i == j) {
                leftDiagSum += table[i][j];
            }
            if (i + j == N - 1) {
                rightDiagSum += table[i][j];
            }
        }
    }

    printf("Muriin niilber:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    printf("Baganiin niilber:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", colSum[i]);
    }
    printf("\n");
    printf("Zuun diagnoliin niilber: %d\n", leftDiagSum);
    printf("Baruun diognaliin niilber: %d\n", rightDiagSum);

    return 0;
}

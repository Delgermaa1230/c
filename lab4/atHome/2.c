#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int table[N][N];

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

    for (int i = 0; i < N; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("%d ", colSum[i]);
    }
    printf("\n");
    printf("%d\n", leftDiagSum);
    printf("%d\n", rightDiagSum);

    return 0;
}

#include <stdio.h>

int main() {
    int N, M;

    printf(" A husnegt bolon B husnegtiin hemjeeg oruulna uu (N mur , M bagana): ");
    scanf("%d %d", &N, &M);

    int A[N][M], B[N][M], C[N * M];

    printf("A giin element uudiig oruulna uu:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("B giin element uudiig oruulna uu:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int idx = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            // A giin element c d baigaa esehiig shalgah
            int duplicate = 0;
            for (int k = 0; k < idx; k++) {
                if (A[i][j] == C[k]) {
                    duplicate = 1;
                    break;
                }
            }
            // baihgui bol c d nemeh
            if (!duplicate) {
                C[idx++] = A[i][j];
            }

            // b giin element c d baiggaaa esehiig shagah
            duplicate = 0;
            for (int k = 0; k < idx; k++) {
                if (B[i][j] == C[k]) {
                    duplicate = 1;
                    break;
                }
            }
            // baihgui bol c d oruulah
            if (!duplicate) {
                C[idx++] = B[i][j];
            }
        }
    }

    printf("C husnegtiin datas (A U B):\n");
    for (int i = 0; i < idx; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

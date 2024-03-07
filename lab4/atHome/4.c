#include <stdio.h>

int main() {
    int n;

    printf("kvadrat husnegtiin hemjee n: ");
    scanf("%d", &n);

    int table[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                table[i][j] = i + 1;
            } else if (i + j == n - 1) {
                table[i][j] = n - i;
            } else {
                table[i][j] = n;
            }
        }
    }

    printf("Husnegt duurgelt:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}

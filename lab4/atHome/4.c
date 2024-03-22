#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++) {
        int value = i + 1;
        int direction = 1;

        for (int j = 0; j < n; j++) {
            a[i][j] = value;

            if (value == n) {
                direction = -1;
            } else if (value == 1) {
                direction = 1;
            }

            value += direction;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

 #include <stdio.h>

int main() {
    int n;

    // Input the value of n
    scanf("%d", &n);

    // Define a table of size n x n
    int table[n][n];

    // Fill the table with the desired pattern
    for (int i = 0; i < n; i++) {
        int value = 1;
        if (i < n / 2) {
            for (int j = 0; j < n - i; j++) {
                table[i][j] = value++;
            }
            for (int j = n - i; j < n; j++) {
                table[i][j] = value--;
            }
        } else {
            value = n - i;
            for (int j = 0; j < i + 1; j++) {
                table[i][j] = value++;
            }
            for (int j = i + 1; j < n; j++) {
                table[i][j] = value--;
            }
        }
    }

    // Print the table
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}

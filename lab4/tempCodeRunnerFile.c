#include <stdio.h>

int main() {
    int n, m;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Declare an array A to store n numbers
    int A[n];

    // Input n numbers from the user and store them in array A
    printf("Enter %d numbers for table A:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Input the value of m from the user
    printf("Enter the value of m: ");
    scanf("%d", &m);

    // Declare an array B to store m numbers
    int B[m];

    // Input m numbers from the user and store them in array B
    printf("Enter %d numbers for table B:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    // Print elements of array A that are also present in array B
    printf("Elements of table A that are in table B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                break; // Break inner loop to avoid duplicate printing
            }
        }
    }
    printf("\n");

    return 0;
}

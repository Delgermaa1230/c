#include <stdio.h>

int main() { 
    int m,n, A[100], B[100], C[200];

    printf( "A array hemjee n bolon B array hemjee m toog oruulna uu: \n");
    scanf("%d %d", &n, &m);

    printf("A muriin %d shirheg toog oruulna uu: ", n);
    for (int i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }

    printf("B muriin %d shirheg toog oruulna uu: ", m);
    for (int i=0; i<m; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < n; i++)
    {
        C[i] = A[i];
    }

    for (int i = 0; i < m; i++ ) {
        C[i + n] = B[i];
    }
    
    printf("\n A array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n B array: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", B[i]);
    }

    printf("\n C array: ");
    for (int i = 0; i < n+m; i++)
    {
        printf("%d ", C[i]);
    }
    
}
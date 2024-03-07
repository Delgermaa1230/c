#include <stdio.h>

int main () {
    int n,x, A[100];
    int xcount = 0;
    printf(" N array hemjee, X shalgah toog oruulna uu: ");
    scanf("%d %d", &n, &x);

    printf("Array iin %d shirheg toog oruulna uu: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Array : ");
    for (int i = 0; i < n; i++) {
        printf("%d ",A[i]);
    }

    for (int i = 0; i < n; i++) {
        if (A[i] == x)
        {
            printf("\nx iin bairlal A[%d]", i);
            xcount ++;
        }
        
    }

    if (xcount == 0) {
        printf("\n-1");
    }
    

}
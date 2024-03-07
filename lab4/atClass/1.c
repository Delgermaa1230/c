#include <stdio.h>

int main() {
    int array[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d dahi toog oruulna uu: \n", i+1);
        scanf("%d", &array[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d dahi too : %d \n", i+1, array[i]);
    }
    
}

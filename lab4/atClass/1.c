#include <stdio.h>

int main() {
    int array[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        array[i] = i+1;
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    
}

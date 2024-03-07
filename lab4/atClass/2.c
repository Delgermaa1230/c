#include <stdio.h>

int main() {
    int array[100], n,i;
    printf("1-99 hoorond too oruulna uu: ");
    scanf("%d", &n);
    if (n < 1 || n >= 100) {
        printf("1-99 hoorond too oruulna uu\n");
        return 1; 
    }
    for (i = 0; i < n; i++)
    {
        printf("massiviin %d dahi toog oruulna uu: \n", i+1);
        scanf("%d", &array[i]);
    }
    printf("%d hemjeet massiviin toonuud reversed: ",n);
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d ",array[i]);
    }
    
}
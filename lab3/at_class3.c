//aldaa zasah bodlogo a giin n zeregiig oloh
#include <stdio.h>

int t = 1; 

//zergiin utgiig oloh function
int power(int a, int n) {
    
    int i;
    for (i = 1; i <= n; i++)
        t *= a; 
}

int main() {
    int n, a;
    // a,n giin utgiig herelegchdees unshina
    printf("a bolon n giin utgiig oruulna uu (agiin n zereg): ");
    scanf("%d %d", &a, &n);
    
    power(a, n); 
    
    printf("%d^%d = %d\n",a,n, t); 
    t=1;
    printf("a bolon n giin utgiig oruulna uu (agiin n zereg): ");
    scanf("%d %d", &a, &n);
    power(a, n); 
    
    printf("%d^%d = %d\n",a,n, t); 
    return 0;
}

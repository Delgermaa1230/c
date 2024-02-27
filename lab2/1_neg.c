//n toonii buh huvaagchdiig ol
#include<stdio.h>

int main() {
    int n,i;
    printf("N toog oruulna uu : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            printf("%d too %d d huvaagdana \n", n,i);
        }
        
    }
    return 0;
}

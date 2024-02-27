// hamgiin ih huvaagch
#include <stdio.h>
int main()
{
    int n, m, i, gcd;

    printf("Hoyor buhel too oruulna uu: ");
    scanf("%d %d", &n, &m);
    for(i=1; i <= n && i <= m; ++i)
    {
        if(n%i==0 && m%i==0)
            gcd = i;
    }

    printf(" %d ,%d 2 toonii hamgiin ih huvaagch %d", n, m, gcd);

    return 0;
}

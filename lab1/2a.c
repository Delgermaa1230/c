#include <stdio.h>
#include <math.h>

int main(){ 
    double a,b,c,d; 
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    printf("d: ");
    scanf("%lf", &d);
    double tegshitgel = d*sqrt((a*a*a + b/c)*(a*a*a + b/c) + d)/(d*d-a*b/c);
    printf("tegshitgeliin hariu = %lf", tegshitgel);
    return 0;
    }
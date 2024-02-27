#include <stdio.h>
#include <math.h>

int main() {
    double a, b, angleC_deg;
    printf(" a: ");
    scanf("%lf", &a);
    printf(" b: ");
    scanf("%lf", &b);
    printf("Untsug: ");
    scanf("%lf", &angleC_deg);
    
    double angleC_rad = angleC_deg * 3.14 / 180.0;
    
    double c = sqrt(a*a + b*b - 2*a*b*cos(angleC_rad));
    
    printf("Uldsen taliin urt n = %.2f\n", c);
    
    return 0;

}

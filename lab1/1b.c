#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    
    printf("tegshitgeliin coffiecent uudig oruul (a,b,c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    printf("hairu 1: %.2f\n", x1);
    printf("hariu 2: %.2f\n", x2);

    return 0;
}

#include <stdio.h>
#include <math.h>

struct Triangle {
    int a;
    int b;
    int c;
};

double calculate_area(int a, int b, int c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    struct Triangle triangles[2];

    // Input for the first triangle
    printf("Enter the sides of the first triangle (a b c): ");
    scanf("%d %d %d", &triangles[0].a, &triangles[0].b, &triangles[0].c);

    // Input for the second triangle
    printf("Enter the sides of the second triangle (a b c): ");
    scanf("%d %d %d", &triangles[1].a, &triangles[1].b, &triangles[1].c);

    // Calculate areas
    double area1 = calculate_area(triangles[0].a, triangles[0].b, triangles[0].c);
    double area2 = calculate_area(triangles[1].a, triangles[1].b, triangles[1].c);

    // Determine the largest triangle
    int largest_index;
    double largest_area;
    if (area1 > area2) {
        largest_index = 0;
        largest_area = area1;
    } else {
        largest_index = 1;
        largest_area = area2;
    }

    // Output the largest triangle
    printf("Area of the largest triangle: %.2f\n", largest_area);
    printf("Side lengths of the largest triangle: %d, %d, %d\n", triangles[largest_index].a, triangles[largest_index].b, triangles[largest_index].c);

    return 0;
}


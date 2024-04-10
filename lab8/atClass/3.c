#include <stdio.h>
#include <math.h>

struct Triangle {
    int a;
    int b;
    int c;
};

double talbai_oloh (int a, int b, int c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    struct Triangle triangles[2];

    printf("Ehnii gurvaljnii gurvan taliig oruul (a b c): ");
    scanf("%d %d %d", &triangles[0].a, &triangles[0].b, &triangles[0].c);

    printf("Hoyordoh gurvaljnii gurvan taliig oruul (a b c): ");
    scanf("%d %d %d", &triangles[1].a, &triangles[1].b, &triangles[1].c);

    double area1 = talbai_oloh (triangles[0].a, triangles[0].b, triangles[0].c);
    double area2 = talbai_oloh (triangles[1].a, triangles[1].b, triangles[1].c);

    int largest_index;
    double largest_area;
    if (area1 > area2) {
        largest_index = 0;
        largest_area = area1;
    } else {
        largest_index = 1;
        largest_area = area2;
    }

    printf("Tom gurvaljnii talbai: %.2f\n", largest_area);
    printf("Tom gurvaljnii gurvan tal: %d, %d, %d\n", triangles[largest_index].a, triangles[largest_index].b, triangles[largest_index].c);

    return 0;
}

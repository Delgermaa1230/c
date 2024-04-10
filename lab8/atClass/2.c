#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

double distance(struct Point a, struct Point b) {
    int x_diff = b.x - a.x;
    int y_diff = b.y - a.y;
    return sqrt(x_diff * x_diff + y_diff * y_diff);
}

int main() {
    struct Point p1, p2;

    printf("Ehnii tsegiin coordinatuudiig oruul (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Hoyordoh tsegiin coordinatuudiig oruul (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    double dist = distance(p1, p2);
    
    printf("Hoyor tsegiin hoorondoh zai: %.2f\n", dist);

    return 0;
}

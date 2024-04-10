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

    // Input for the first point
    printf("Enter the coordinates of the first point (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    // Input for the second point
    printf("Enter the coordinates of the second point (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    // Calculate distance between points
    double dist = distance(p1, p2);
    
    printf("Distance between points: %.2f\n", dist);

    return 0;
}

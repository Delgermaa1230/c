#include <stdio.h>

int main() {
    float onoo;
    printf("Avsan onoo : ");
    scanf("%f", &onoo);
    onoo = onoo * 100/35;
    char dun;
    if (onoo == 100) {
        dun = 'A';
    } else if (onoo >= 90) {
        dun = 'A';
    } else if (onoo >= 80) {
        dun = 'B';
    } else if (onoo >= 70) {
        dun = 'C';
    } else if (onoo >= 60) {
        dun = 'D';
    } else {
        dun = 'F';
    }

    printf("Tanii dun: %f %c\n", onoo ,dun);

    return 0;
}

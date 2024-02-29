#include <stdio.h>

// 2 toonii bagiig oloh function
int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int min_number;

    // ehnii too oruulah
    printf("5n toonii ehnii toog oruulna uu: ");
    scanf("%d", &min_number);

    // daraagiin 4 n toog avah8 herev 4n toon dund baga too baival min_number utgiig solih
    for (int i = 1; i < 5; ++i) {
        int num;
        printf("5n toonii nrgiig oruulna uu: ");
        scanf("%d", &num);
        min_number = min(min_number, num);
    }

    // hagmiin baga toog hevleh
    printf("Hamgiin baga too: %d\n", min_number);

    return 0;
}


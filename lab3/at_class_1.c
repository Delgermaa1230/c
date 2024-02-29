#include <stdio.h>

// sondoi bol 1 tegsh bol 0
int is_odd(int num) {
    return num % 2 != 0 ? 1 : 0;
}

// n hurtelh buh sondgoi toog hevleh function
void print_odd_numbers(int n) {
    printf("Sondgoi toonuud: ");
    for (int i = 1; i <= n; ++i) {
        if (is_odd(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("n toog oruulna uu (sondgoi toonii huree): ");
    scanf("%d", &n);

    print_odd_numbers(n);

    return 0;
}

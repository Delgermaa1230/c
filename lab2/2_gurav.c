#include <stdio.h>

int main() {
    int number;

    printf(" too oruul: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d tegsh too.\n", number);

        if (number % 10 == 0 || number % 4 == 0) {
            printf("%d 4 esvel 10t huvaagdana\n", number);
        } else {
            printf("%d 4 esvel 10 t huvaagdahgui\n", number);
        }
    } else {
        printf("%d sondgoi too.\n", number);

        if (number % 3 == 0 || number % 7 == 0) {
            printf("%d 3 esvel 7t huvaagdana\n", number);
        } else {
            printf("%d 3 esvel 7t huvaagdahgui\n", number);
        }
    }

    return 0;
}

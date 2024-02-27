// olon davtagdsan too
#include <stdio.h>

int main() {
    long long number;
    int digit, mostCommonDigit;
    int frequency[10] = {0}; 
    printf("10 n oront too oruul: ");
    scanf("%lld", &number);

    while (number != 0) {
        digit = number % 10;
        frequency[digit]++;
        number /= 10;
    }
    mostCommonDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (frequency[i] > frequency[mostCommonDigit]) {
            mostCommonDigit = i;
        }
    }

    printf("hamgiin ih orson too: %d\n", mostCommonDigit);

    return 0;
}

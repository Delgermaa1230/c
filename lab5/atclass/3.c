#include <stdio.h>

#define SIZE 10 // Change this to match the size of your array

int main() {
    int a[SIZE] = {1, 2, 2, 3, 4, 5, 5, 5, 6, 7}; // Sample array
    int freq[SIZE] = {0}; // Array to store frequencies, initialized to 0

    // Count frequencies of each element in the array
    for (int i = 0; i < SIZE; i++) {
        freq[a[i]]++;
    }

    int addr1 = 0;
    int addr = a[0]; // Initialize max frequency number with the first element

    // Find the number with the highest frequency


    printf("The number with the highest frequency is %d, which appears %d times.\n", addr, addr1);

    return 0;
}

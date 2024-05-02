#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 3 // Maximum number of digits in the given range (0-100)
#define BASE 10       // Base for the radix sort

// Function to perform counting sort based on a specific digit
void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[BASE] = {0};
    int i;

    // Count occurrences of digits at a given position
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % BASE]++;

    // Adjust count array to obtain correct positions
    for (i = 1; i < BASE; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % BASE] - 1] = arr[i];
        count[(arr[i] / exp) % BASE]--;
    }

    // Copy the output array to the original array
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// Function to perform radix sort
void radixSort(int arr[], int n) {
    int max = arr[0];
    int i;

    // Find the maximum number in the array
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // Perform counting sort for each digit from the least significant to the most significant
    for (int exp = 1; max / exp > 0; exp *= BASE)
        countingSort(arr, n, exp);
}

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    int numbers[200];
    int i = 0;
    while (i < 200 && fscanf(file, "%d", &numbers[i]) == 1) {
        i++;
    }
    fclose(file);

    int n = i; // Number of elements read from file

    radixSort(numbers, n);

    printf("Sorted numbers in descending order:\n");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", numbers[i]);
    printf("\n");

    return 0;
}

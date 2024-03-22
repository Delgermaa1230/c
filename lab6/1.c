#include <stdio.h>
#include <stdlib.h>

void read(int *data, int size);
void max_min(int *data, int size, int *max, int *min);
int find(int *data, int size, int x);

int main() {
    int *numbers;
    int size, max, min, searchValue;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Allocate memory dynamically
    numbers = (int *)malloc(size * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read values from the user
    read(numbers, size);

    // Find max and min
    max_min(numbers, size, &max, &min);
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    // Search for a value
    printf("Enter a value to search: ");
    scanf("%d", &searchValue);
    if (find(numbers, size, searchValue))
        printf("%d is found.\n", searchValue);
    else
        printf("%d is not found.\n", searchValue);

    // Free dynamically allocated memory
    free(numbers);

    return 0;
}

void read(int *data, int size) {
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }
}

void max_min(int *data, int size, int *max, int *min) {
    *max = *min = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > *max)
            *max = data[i];
        if (data[i] < *min)
            *min = data[i];
    }
}

int find(int *data, int size, int x) {
    for (int i = 0; i < size; i++) {
        if (data[i] == x)
            return 1; // Found
    }
    return 0; // Not found
}

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h> // malloc, free
#include <string.h> // strlen, strcat

// Comparison function for integer
int compare_int(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Comparison function for characters
int compare_char(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

// Comparison function for doubles
int compare_double(const void *a, const void *b) {
    if (*(double*)a < *(double*)b) return -1;
    if (*(double*)a > *(double*)b) return 1;
    return 0;
}

// Function to sort array of any data type
void sort_array(void *arr, int size, size_t elem_size, int (*compare)(const void *, const void *)) {
    qsort(arr, size, elem_size, compare);
}

// Function to print array of any data type
void print_array(void *arr, int size, size_t elem_size, const char *format) {
    for (int i = 0; i < size; i++) {
        if (strcmp(format, "%d ") == 0) {
            printf("%d ", *((int*)arr + i));
        } else if (strcmp(format, "%c ") == 0) {
            printf("%c ", *((char*)arr + i));
        } else if (strcmp(format, "%.1f ") == 0) {
            printf("%.1f ", *((double*)arr + i));
        }
    }
    printf("\n");
}

int main() {
    int int_arr[] = {2, 1, 9, 3};
    char char_arr[] = {'b', 'a', 'd', 'c'};
    double double_arr[] = {2.5, 1.2, 9.8, 3.7};
    int size_int = sizeof(int_arr) / sizeof(int_arr[0]);
    int size_char = sizeof(char_arr) / sizeof(char_arr[0]);
    int size_double = sizeof(double_arr) / sizeof(double_arr[0]);

    printf("Original int array: ");
    print_array(int_arr, size_int, sizeof(int), "%d ");
    printf("Original char array: ");
    print_array(char_arr, size_char, sizeof(char), "%c ");
    printf("Original double array: ");
    print_array(double_arr, size_double, sizeof(double), "%.1f ");

    // Sort arrays
    sort_array(int_arr, size_int, sizeof(int), compare_int);
    sort_array(char_arr, size_char, sizeof(char), compare_char);
    sort_array(double_arr, size_double, sizeof(double), compare_double);

    printf("Array sorted in ascending order: ");
    print_array(int_arr, size_int, sizeof(int), "%d ");
    printf("Array sorted in ascending order: ");
    print_array(char_arr, size_char, sizeof(char), "%c ");
    printf("Array sorted in ascending order: ");
    print_array(double_arr, size_double, sizeof(double), "%.1f ");

    return 0;
}

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h> // malloc, free
#include <string.h> // strlen, strcat

// Өсөхөөр эрэмбэлэх харьцуулах функц
int compare_asc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Буурахаар эрэмбэлэх харьцуулах функц
int compare_desc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

// Харьцуулах функцийн заагчаар өгөгдсөнийг эрэмбэлэх функц
void sort_array(int *arr, int size, int (*compare)(const void *, const void *)) {
    qsort(arr, size, sizeof(int), compare);
}

// Хэвлэх функц
void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 7, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, size);

    // Sort array in ascending order
    sort_array(arr, size, compare_asc);
    printf("Array sorted in ascending order: ");
    print_array(arr, size);

    // Sort array in descending order
    sort_array(arr, size, compare_desc);
    printf("Array sorted in descending order: ");
    print_array(arr, size);

    return 0;
}

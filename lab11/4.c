#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 3 

//Todorhoi tsipr deer suurilan count sort iig guitsetgeh function
void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};
    int i;

    // Tuhain bairlal deer baigaa tsipriin davtamjiig tooloh
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Zov bairlaliig olohiin tuld array g tohiruulj uguh
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Output array
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Output array baigaagaa jinhene array daa huulah
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// Radix sortiig hiih function
void radixSort(int arr[], int n) {
    int max = arr[0];
    int i;

    // Array baigaa hamgiin ih elementiig oloh
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // Tsipr bur deer count sort hiih
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error in opening file.\n");
        return 1;
    }

    int numbers[200];
    int i = 0;
    while (i < 200 && fscanf(file, "%d", &numbers[i]) == 1) {
        i++;
    }
    fclose(file);

    int n = i; 

    radixSort(numbers, n);

    printf("Buurah erembeer erembelsen n:\n");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", numbers[i]);
    printf("\n");

    return 0;
}

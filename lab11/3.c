#include <stdio.h>
#include <stdlib.h>

#define MAX_RANGE 101 

void countingSort(int arr[], int n) {
    int output[n];
    int count[MAX_RANGE + 1] = {0};
    int i;
    //utguudin davtamjiig toolno
    for (i = 0; i < n; i++)
        count[arr[i]]++;
    //cumulative sum iig n olood count d hadgalah indexiig n zaaj ugch baigaa
    for (i = 1; i <= MAX_RANGE; i++)
        count[i] += count[i - 1];
    //hamgiin suuliin elementees avhuulaad outputd bairshuulj ehlene 
    //cumulative deh indexiihn daguu bairshuulad davtamjiin toog n bagasgana
    for (i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
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

    int n = i; 

    countingSort(numbers, n);

    printf("Sort hiisen toonuud:\n");
    for (i = 0; i < n; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    return 0;
}

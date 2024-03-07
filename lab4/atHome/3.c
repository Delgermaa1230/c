#include <stdio.h>

int main() {
    int N, M, K;

    printf("Davhar (N), Davhahr bolgond baigaa ailiin too (M), orts (K) oruulna uu: ");
    scanf("%d %d %d", &N, &M, &K);

    int building[N][M][K];

    // ail bolgond toot onoon
    int houseNumber = 1;
    for (int floor = 0; floor < N; floor++) {
        for (int house = 0; house < M; house++) {
            for (int entrance = 0; entrance < K; entrance++) {
                building[floor][house][entrance] = houseNumber++;
            }
        }
    }

    // Print out the house numbers
    printf("House numbers in the building:\n");
    for (int floor = 0; floor < N; floor++) {
        for (int house = 0; house < M; house++) {
            for (int entrance = 0; entrance < K; entrance++) {
                printf("Davhar %d, Ail %d, Orts %d: %d\n", floor + 1, house + 1, entrance + 1, building[floor][house][entrance]);
            }
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, m, x;
    int A[100][100]; 

    printf("n, m hemjeeg oruulna uu (1 <= n, m < 100): ");
    scanf("%d %d", &n, &m);

    printf(" %d mur * %d bagana buhii toog oruulna uu:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Shalgah too x iig oruulna uu: ");
    scanf("%d", &x);

    int xcount = 0; 
    int MuriinBairlal[100]; 
    int BaganiinBairlal[100]; 
    int count = 0; 

    printf("Husnegt deh %d iin bairlal:\n", x);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == x) {
                xcount = 1;
                MuriinBairlal[count] = i + 1; 
                BaganiinBairlal[count] = j + 1;
                count++;
            }
        }
    }

    if (xcount) {
        for (int i = 0; i < count; i++) {
            printf("(%d, %d) ", MuriinBairlal[i], BaganiinBairlal[i]);
        }
    } else {
        printf("1, -1");
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

// anhnii too esehiig shalgah function
int prime(int num) {
    if (num <= 1) {
        return 0; //  0 bolon 1 iig anhnii too bish gj uzne
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // 1 bolon uuruusu uur toond huvaagdj bui ucher anhnii too bish
        }
    }
    return 1; // 1 bolon uuruusu uur toond huvaagdahgui anhnii too
}

int main() {
    int a, b;

    // a b g hereglegchees avah
    printf(" a bolon b toog oruulna uu (anhnii too huree): ");
    scanf("%d %d", &a, &b);

    // a b hoorondh anhnii too ghevleh
    printf("%d bolon %d ii hoorondoh anhnii toonuud:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

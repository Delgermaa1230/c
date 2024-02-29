#include <stdio.h>

// toonii tsipriin udguudiin niilberiig oloh function
int digit_sum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N;

    printf("Tsipruudiin niilber olj huvaagdah too oruulah N: ");
    scanf("%d", &N);

    printf("1 ees deesh %d hurtel toon dotor tsipruudiinhe niilbert huvaagdah toonuud:\n", N);

    for (int i = 1; i <= N; i++) {
        //sum_of_digit ee tootsooloh
        int sum_of_digits = digit_sum(i);
        
        // tsipruudin niilbert huvaagdaj baiga esehiig shalgah
        if (sum_of_digits != 0 && i % sum_of_digits == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

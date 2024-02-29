#include <stdio.h>

// n hurtelh toonii kvadratuudiig niilberiig oloh function 
int kvadratSum(int n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}

int main() {
    int n;

    printf("n iig oruuls: ");
    scanf("%d", &n);

    //tomyogo ashiglan nuulberiig oloh
    int result = kvadratSum(n);
    printf("f(%d) = %d\n", n, result);

    return 0;
}

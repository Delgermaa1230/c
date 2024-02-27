#include <stdio.h>
#include <stdbool.h>

// palindrome esehiig shalgah
int main() {
    int num, originalNum, reversedNum = 0, remainder;
    bool isPalindrome;

    printf("4n orontoi too oruul : ");
    scanf("%d", &num);

    originalNum = num; 

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    isPalindrome = originalNum == reversedNum;

    printf("%d\n", isPalindrome);

    return 0;
}

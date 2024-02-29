#include <stdio.h>

// Function to check if a number is a palindrome
int is_palindrome(int num) {
    int originalNum = num;
    int reverseNum = 0;
    
    // toog erguulelt hiine
    while (num > 0) {
        int digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }

    // originalNum reverseNum- tai ijil esehiig shalgana
    if (originalNum == reverseNum) {
        return 1; //palindrome
    } else {
        return 0; //palindrome bish
    }
}

int main() {
    int num;

    printf("Palindrome esehiig shalgah a toog oruul: ");
    scanf("%d", &num);

    // toog palindrome esehiig shalgaad hariug printleh
    printf("%d\n", is_palindrome(num));

    return 0;
}

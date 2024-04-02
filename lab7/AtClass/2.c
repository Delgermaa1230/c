#include <stdio.h>

int main() {
    char str[100];
    int egshig_too = 0;
    
    printf("Temdegt tsuvaag oruulna uu: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; 
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            egshig_too++;
        }
    }
    
    printf("Temdegt tsuvaand %d shirheg egshig useg baina.\n", egshig_too);
    
    return 0;
}

#include <stdio.h>
int main () {
    char s[] = "hello";
    char s2[20] = "Muis-iinhan"; //string davhar haaltand bh yostoi
    for (int i = 0; i < 5; i++) { // i zarlagdaagui
            s2[i] = s[i];
    } 

    s2[5] = '\0'; //hello ugiig tasaljiin

    printf("%s", s2);
    return 0;
}
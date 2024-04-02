#include <stdio.h>
int main () {
    char s[] = "hello";
    char s2[20] = 'Muis-iinhan';
    for (int i = 0; i < 5; i++) {
            s2[i] = s[i];
    } 

    printf("%s", s2);
    return 0;
}
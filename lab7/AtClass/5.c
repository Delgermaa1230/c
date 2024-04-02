#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    char s2[100];
    char niiluulsen[200];

    printf("Ehniihiig oruul: ");
    fgets(s1, sizeof(s1), stdin);
    
    printf("hoyordhoo oruul: ");
    fgets(s2, sizeof(s2), stdin);

    if ((strlen(s1) > 0) && (s1[strlen(s1) - 1] == '\n')) {
        s1[strlen(s1) - 1] = '\0';
    }

    if ((strlen(s2) > 0) && (s2[strlen(s2) - 1] == '\n')) {
        s2[strlen(s2) - 1] = '\0';
    }

    strcpy(niiluulsen, s1);
    strcat(niiluulsen, s2);

    printf("Niiluulsen n: %s\n", niiluulsen);

    return 0;
}

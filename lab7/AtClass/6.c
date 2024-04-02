#include <stdio.h>
#include <string.h>

int main() {
    char uguulber[100];

    printf("Ugvvlber oruul: ");
    fgets(uguulber, sizeof(uguulber), stdin);

    printf("Hooson zaigaar tasalsan uguulber:\n");
    for (int i = 0; i < strlen(uguulber); i++) {
        if (uguulber[i] != ' ') {
            printf("%c ", uguulber[i]);
        } else {
            printf("\n");
        }
    }

    return 0;
}

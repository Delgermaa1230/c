#include <stdio.h>
#include <string.h>

int main() {
    char uguulber[100];
    int zai_too = 1;

    printf("Ugvvlber oruul: ");
    fgets(uguulber, sizeof(uguulber), stdin);

   
    for (int i = 0; i < strlen(uguulber); i++) {
        if (uguulber[i] == ' ') {
            zai_too++;
        }
    }
    printf("Niit ugiin too: %d", zai_too);
    return 0;
}

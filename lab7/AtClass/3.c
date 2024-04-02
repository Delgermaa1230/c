#include <stdio.h>
#include <string.h>

int main() {
    char ug1[100];
    char ug2[100];
    
    printf("Ehnii ugiig oruul: ");
    scanf("%s", &ug1);
    
    printf("Hoyordoh ugiig oruul: ");
    scanf("%s", &ug2);
    
    if (strcmp(ug1, ug2) == 0) {
        printf("hoyor ug ijil.\n");
    } else {
        printf("Ijil bish.\n");
    }
    
    return 0;
}

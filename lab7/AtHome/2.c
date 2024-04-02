#include <stdio.h>
#include <string.h>

int main() {
    char uguulber[1000];
    char max_urt_ug[100]; 
    int max_ugiin_urt = 0;
    int ugiin_urt = 0;
    int i = 0;

    printf("uguulber oruul: ");
    fgets(uguulber, sizeof(uguulber), stdin);

    while (uguulber[i] != '\0') {
        if (uguulber[i] != ' ' && uguulber[i] != '\n') {
            ugiin_urt++;
        } else {
  
            if (ugiin_urt > max_ugiin_urt) {
                max_ugiin_urt = ugiin_urt;
                strncpy(max_urt_ug, &uguulber[i - ugiin_urt], ugiin_urt); 
                max_urt_ug[ugiin_urt] = '\0'; 
            }
            ugiin_urt = 0; 
        }
        i++;
    }

    printf("Hamgiin urt ug: %s\n", max_urt_ug);

    return 0;

}
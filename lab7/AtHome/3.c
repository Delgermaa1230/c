#include <stdio.h>
#include <string.h>

int main() {
    char uguulber[1000];
    char ug[100];
    int oldson_bairlal = -1; 

    printf("Temdegtiim tsuvaa oruul: ");
    fgets(uguulber, sizeof(uguulber), stdin);

    printf("Oloh ug oruul: ");
    scanf("%s", &ug);

    char *bairlal = strstr(uguulber, ug);
    if (bairlal != NULL) {
        oldson_bairlal = bairlal - uguulber; 

        int ehle_bairlal = oldson_bairlal+1;

        int tugsgul_bairlal = oldson_bairlal + strlen(ug);

        printf("Ugiin bairlal: %d-%d\n", ehle_bairlal,tugsgul_bairlal);
    } else {
        printf("%d\n", oldson_bairlal);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

void enter_arilgah(char *str) {
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
}

int main() {
    char ovog[30], ner[30], durtai_ongo[20], hobby[20], chuluut_tsag[30];
    int nas, tursun_on, tursun_sar, tursun_udur;

    puts("Tanii ovog?");
    fgets(ovog, sizeof(ovog), stdin);
    enter_arilgah(ovog);

    puts("Tanii ner?");
    fgets(ner, sizeof(ner), stdin);
    enter_arilgah(ner);

    puts("Tanii tursun on");
    scanf("%d", &tursun_on);
    getchar();

    puts("Tanii tursun sar");
    scanf("%d", &tursun_sar);
    getchar();

    puts("Tanii tursun udur");
    scanf("%d", &tursun_udur);
    getchar();

    nas = 2024 - tursun_on;

    puts("Tanii durtai ongo?");
    fgets(durtai_ongo, sizeof(durtai_ongo), stdin);
    enter_arilgah(durtai_ongo);

    puts("Tanii hobby?");
    fgets(hobby, sizeof(hobby), stdin);
    enter_arilgah(hobby);

    puts("Tan chuluut tsagaaraa yu hiideg ve?");
    fgets(chuluut_tsag, sizeof(chuluut_tsag), stdin);
    enter_arilgah(chuluut_tsag);

    printf("%s ovogtoi %s n %d-%d-%d udur tursun. Odoo %d nastai. Tuunii durtai ungu n %s. Ter chuluut tsagaaraa %s . Tuunii hobby n %s.", ovog, ner, tursun_on, tursun_sar, tursun_udur, nas, durtai_ongo, chuluut_tsag, hobby);

    return 0;
}

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h> 
#include <string.h> 

// Function to concatenate strings
char *concatenate_strings(int count, ...) {
    va_list args;
    va_start(args, count);

    // Стрингийн уртыг олох
    int total_length = 0;
    for (int i = 0; i < count; i++) {
        char *str = va_arg(args, char*);
        total_length += strlen(str);
    }

    // Холбосон Стрингүүддээ Allocate memory 
    char *result = malloc(total_length + 1);
    if (result == NULL) {
        return NULL;
    }

    // Стрингүүдээ  холбох
    result[0] = '\0';
    va_start(args, count); // Листийг дахин эхлүүлэх
    for (int i = 0; i < count; i++) {
        strcat(result, va_arg(args, char*));
    }

    va_end(args);
    return result;
}

int main() {

    char *concatenated = concatenate_strings(3, "Hello, ", "world! ", "This is a concatenated string.");
    printf("Concatenated string: %s\n", concatenated);
    free(concatenated);

    return 0;
}
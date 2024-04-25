#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countWords(const char *text);
int countSentences(const char *text);
void findLongestWord(const char *text, char *longestWord);

int main() {
    FILE *inputFile, *outputFile;
    char text[2000];
    char longestWord[100]; 
    int wordCount, sentenceCount;

    inputFile = fopen("inputFiles/wikiMongolia.txt", "r");
    if (inputFile == NULL) {
        printf("File neehed aldaa garlaa.\n");
        return 1;
    }

    fgets(text, sizeof(text), inputFile);

    fclose(inputFile);

    wordCount = countWords(text);

    sentenceCount = countSentences(text);

    findLongestWord(text, longestWord);

    outputFile = fopen("outputFiles/output1.txt", "w");
    if (outputFile == NULL) {
        printf("Output filed aldaa garlaa.\n");
        return 1;
    }

    fprintf(outputFile, "Ugiin too: %d\n", wordCount);
    fprintf(outputFile, "Uguulberiin too: %d\n", sentenceCount);
    fprintf(outputFile, "Hamgiin urt ug: %s\n", longestWord);

    fclose(outputFile);

    printf("outputFiles/output1.txt file-d medeellig amjilttai hadgallaa\n");

    return 0;
}

int countWords(const char *text) {
    int count = 0;
    int isWord = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && text[i] != '\n' && text[i] != '\t') {
            if (!isWord) {
                isWord = 1;
                count++;
            }
        } else {
            isWord = 0;
        }
    }
    return count;
}

int countSentences(const char *text) {
    int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            count++;
        }
    }
    return count;
}

void findLongestWord(const char *text, char *longestWord) {
    int max_length = 0;
    int current_length = 0;
    int start_index = 0;
    int max_start_index = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && text[i] != '\n') {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                max_start_index = start_index;
            }
            current_length = 0;
            start_index = i + 1;
        }
    }

    strncpy(longestWord, &text[max_start_index], max_length);
    longestWord[max_length] = '\0';
}

//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char longest[100];
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char *word = strtok(str, " ");
    while (word != NULL) {
        int length = strlen(word);
        if (length > maxLength) {
            maxLength = length;
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
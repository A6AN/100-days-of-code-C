// Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    char words[50][50];
    int wordCount = 0;
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    int j = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ') {
            words[wordCount][j++] = name[i];
        } else if (j > 0) {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        }
    }
    if (j > 0) {
        words[wordCount][j] = '\0';
        wordCount++;
    }
    
    printf("Result: ");
    for (int i = 0; i < wordCount - 1; i++) {
        printf("%c. ", toupper(words[i][0]));
    }
    
    if (wordCount > 0) {
        printf("%s", words[wordCount - 1]);
    }
    
    printf("\n");
    
    return 0;
}

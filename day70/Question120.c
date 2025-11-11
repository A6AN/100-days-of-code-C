//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    
    int capitalizeNext = 1;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        } else if (isalpha(str[i])) {
            str[i] = tolower(str[i]);
        } else if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalizeNext = 1;
        }
    }
    
    printf("Sentence case: %s\n", str);
    
    return 0;
}

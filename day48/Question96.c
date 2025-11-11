// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
        len--;
    }
    
    char *start = sentence;
    char *end = sentence;
    
    while (*end != '\0') {
        if (*end == ' ') {
            reverseWord(start, end - 1);
            start = end + 1;
        }
        end++;
    }

    reverseWord(start, end - 1);
    
    printf("Result: %s\n", sentence);
    
    return 0;
}

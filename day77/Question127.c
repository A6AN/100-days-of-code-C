//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char ch;
    
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error opening input.txt!\n");
        return 1;
    }
    
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error opening output.txt!\n");
        fclose(input);
        return 1;
    }
    
    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }
    
    printf("Conversion complete! Check output.txt\n");
    
    fclose(input);
    fclose(output);
    
    return 0;
}

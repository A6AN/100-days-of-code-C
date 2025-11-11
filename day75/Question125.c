//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char text[256];
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter text to append: ");
    scanf(" %[^\n]", text);
    
    fprintf(file, "%s\n", text);
    
    fclose(file);
    
    printf("Text appended successfully!\n");
    
    return 0;
}

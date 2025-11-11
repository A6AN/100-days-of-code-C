//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    char ch;
    
    printf("Enter source filename: ");
    scanf("%s", sourceFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);
    
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }
    
    destination = fopen(destFile, "w");
    if (destination == NULL) {
        printf("Error opening destination file!\n");
        fclose(source);
        return 1;
    }
    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    
    printf("File copied successfully!\n");
    
    fclose(source);
    fclose(destination);
    
    return 0;
}

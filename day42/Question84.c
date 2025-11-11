//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    printf("Uppercase string is: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A';
        }
        printf("%c", ch);
    }
    printf("\n");

    return 0;
}
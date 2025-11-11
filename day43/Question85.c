//Reverse a string.
#include <stdio.h>
int main() {
    char str[100], reversed[100];
    int length = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';

    printf("Reversed string: %s\n", reversed);

    return 0;
}
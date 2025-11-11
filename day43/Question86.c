//Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int start = 0, end = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    while (str[end] != '\0' && str[end] != '\n') {
        end++;
    }
    end--;  // Set end to the last character

    // Check for palindrome
    int isPalindrome = 1;
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
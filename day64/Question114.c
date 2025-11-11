//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);
    
    int n = strlen(s);
    int maxLength = 0;
    
    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        for (int j = i; j < n; j++) {
            if (visited[(int)s[j]] == 1) {
                break;
            }
            visited[(int)s[j]] = 1;
            int currentLength = j - i + 1;
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        }
    }
    
    printf("Length of longest substring: %d\n", maxLength);
    
    return 0;
}

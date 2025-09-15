/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main()
{
    int groups[] = {1, 3, 5, 3, 1};
    int g = sizeof(groups) / sizeof(groups[0]);

    for (int i = 0; i < g; i++) {
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        if (i != g - 1)  // blank line between groups
            printf("\n");
    }

    return 0;
}

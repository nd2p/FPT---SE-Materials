#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100];
    int i, j, l, m, k;

    printf("\n\nConcatenate Two Strings Manually :\n");
    printf("-------------------------------------\n");

    printf("Input the first string : ");
    fgets(str1, sizeof str1, stdin);
    printf("Input the second string : ");
    fgets(str2, sizeof str2, stdin);

    l = strlen(str1);
    m = strlen(str2);

    // Remove newline characters from fgets input
    if (str1[l - 1] == '\n')
        str1[--l] = '\0'; // Remove newline from first string
    if (str2[m - 1] == '\n')
        str2[--m] = '\0'; // Remove newline from second string

    // Concatenate str2 to str1
    str1[l] = ' '; // Add a space before concatenating str2
    for (i = l + 1, j = 0; j < m; ++i, ++j) {
        str1[i] = str2[j];
    }
    str1[i] = '\0'; // Terminate the concatenated string

    printf("After concatenation the string is :\n%s\n\n", str1);
}


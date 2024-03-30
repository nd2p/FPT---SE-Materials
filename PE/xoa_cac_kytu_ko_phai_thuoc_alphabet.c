#include <stdio.h>
#include <string.h>

void main() {
    char str[150];
    int i, j;

    printf("\n\nRemove characters in String Except Alphabets :\n");
    printf("--------------------------------------------------\n");

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    for (i = 0, j = 0; str[i] != '\0'; ++i) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Terminate the string at the correct position

    printf("After removing the Output String : %s\n\n", str);
}


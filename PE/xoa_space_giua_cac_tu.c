#include<stdio.h>
#include<string.h>

int main() {
    char s[90];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int i, j;
    for(i = 0, j = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';  // Terminate the string properly

    printf("String after removing spaces: %s\n", s);
    return 0;
}


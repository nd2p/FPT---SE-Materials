#include <stdio.h>
#include <string.h>

int main() {
    char name[25][50], temp[50];
    int n, i, j;
    
    printf("Sorts the strings of an array using bubble sort:\n");
    printf("------------------------------------------------\n");

    printf("Input number of strings: ");
    scanf("%d", &n);
    // Clear the input buffer
    while (getchar() != '\n');

    printf("Input strings:\n");
    for (i = 0; i < n; i++) {
        fgets(name[i], sizeof(name[i]), stdin);
    }

    // Logic Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(name[j], name[j + 1]) > 0) {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }

    printf("The strings appear after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%s", name[i]);
    }

    return 0;
}


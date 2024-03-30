#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
	int i, j;
    // Loop for each row
    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (j = 0; j < n-i; j++) {
            printf("  ");
        }
        // Print numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

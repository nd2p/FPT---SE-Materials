#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers (less than 10): ");
    scanf("%d", &n);

    if (n <= 0 || n >= 10) {
        printf("Invalid input. Number of integers must be between 1 and 9.\n");
        return 1;
    }

    int arr[10], unique[10];
    int i, j, k = 0;

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Resultant list after removing duplicated odd numbers:\n");
    for (i = 0; i < n; i++) {
        int isOdd = (arr[i] % 2 != 0);
        int isUnique = 1;
        
        // Check if the number is odd and unique
        if (isOdd) {
            for (j = 0; j < k; j++) {
                if (unique[j] == arr[i]) {
                    isUnique = 0;
                    break;
                }
            }
            // If the number is odd and unique, add it to the unique array
            if (isUnique) {
                unique[k++] = arr[i];
                printf("%d\n", arr[i]);
            }
        }
        // If the number is even, just print it
        else {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}


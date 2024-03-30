#include <stdio.h>

int main() {
    int n;
    int i;
    // Input the size of the array
    printf("Enter the size of the array (less than 10): ");
    scanf("%d", &n);
    
    // Check if the input size is valid
    if (n <= 0 || n >= 10) {
        printf("Invalid input size.\n");
        return 1;
    }
    
    int arr[n];
    int unique[n]; // Array to store unique elements
    int num_unique = 0; // Number of unique elements found
    
    // Input the elements of the array
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Loop through the array to find unique elements
    for (i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        // If j reached i, it means no duplicate found
        if (j == i) {
            unique[num_unique++] = arr[i];
        }
    }
    
    // Print the unique elements with newlines in between
    printf("Resultant list of numbers after removing duplicates:\n");
    for (i = 0; i < num_unique; i++) {
        printf("%d\n", unique[i]);
    }
    
    return 0;
}


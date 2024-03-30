#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char s[9]; // 8 bits for binary string + 1 for null terminator
    printf("Enter binary string (8 bits): ");
    fgets(s, sizeof(s), stdin);
    
    // Remove newline character if present
    if (s[strlen(s) - 1] == '\n')
        s[strlen(s) - 1] = '\0';
    
    int i;
    int least_significant_one = -1;

    // Find the least significant '1' bit
    for (i = 7; i >= 0; i--) {
        if (s[i] == '1') {
            least_significant_one = i;
            break;
        }
    }

    // If no '1' bit found, the number is 0
    if (least_significant_one == -1) {
        printf("Two's complement: 0\n");
        return 0;
    }

    // Invert all bits to the right of the least significant '1' bit
    for (i = least_significant_one - 1; i >= 0; i--) {
        if (s[i] == '0')
            s[i] = '1';
        else
            s[i] = '0';
    }

    printf("Two's complement: %s\n", s);
    return 0;
}


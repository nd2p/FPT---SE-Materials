#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    char names[n][50], searchKey[50];
    
    printf("Enter the names of %d students:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }
    
    printf("Enter any name to search: ");
    scanf("%s", searchKey);
    
    printf("Names containing the keyword '%s':\n", searchKey);
    
    for(i = 0; i < n; i++) {
        if(strstr(names[i], searchKey) != NULL) {
            printf("%s\n", names[i]);
        }
    }

    return 0;
}


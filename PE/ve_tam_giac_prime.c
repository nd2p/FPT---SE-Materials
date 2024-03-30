#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
	int i;
    if (num < 2)
        return 0; // Not prime
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

// Function to generate and print the prime triangle
void generate_prime_triangle(int n) {
    int num = 2;
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            while (!is_prime(num))
                num++;
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        generate_prime_triangle(n);
    }

    return 0;
}


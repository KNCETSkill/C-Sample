// C Assignment 01 - Factorial Program
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Validate input
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // TODO: Write a loop to compute factorial
        // Your code here

        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}

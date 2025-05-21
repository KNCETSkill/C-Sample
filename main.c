// C Assignment 01 - Factorial Program
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    scanf("%d", &n);

    // Validate input
    if (n < 0) {
        printf("Invalid");
    } else {
        // TODO: Write a loop to compute factorial
        // Your code here

        printf("%llu", factorial);
    }

    return 0;
}

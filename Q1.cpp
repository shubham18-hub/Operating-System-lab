#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int num, i, isPrime = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // 1. Prime Check
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

    // 2. Factorial Calculation
    if (num < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %lld\n", num, fact);
    }

    return 0;
}
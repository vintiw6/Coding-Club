#include <stdio.h>

int main()
{
    long n, current = 5, answer = 0;
    // n stores input integer

    printf("Enter a non-negative integer: ");
    scanf("%ld", &n);

    while (current <= n)
    {
        answer += n / current;
        current *= 5;
        // It divides n by current and adds the integer result
    }

    printf("Number of trailing zeros in %ld! is %ld\n", n, answer);
    return 0;
}

// Why use Current = 5?
// Answer: Trailing zeros come from factors of 5 in the prime factorization of n!.

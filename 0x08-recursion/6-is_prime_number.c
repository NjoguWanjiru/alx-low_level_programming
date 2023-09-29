#include "main.h"

/**
 * is_prime_recursive - Helper function to check if a number is prime.
 * @n: The number to check.
 * @i: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int i)
{
    if (n <= 1) 
        return 0;

    if (i < 2) 
        return 1;

    if (n % i == 0) 
        return 0;

    return is_prime_recursive(n, i - 1); 
}

/**
 * is_prime_number - Checks if an input integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    if (n <= 1) 
        return 0;

    return is_prime_recursive(n, n - 1);
}

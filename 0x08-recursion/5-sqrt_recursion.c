#include "main.h"

/**
 * sqrt_recursive - Helper function to calculate the square root recursively.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int sqrt_recursive(int n, int guess)
{
    int next_guess = (n / guess + guess) / 2;

    if (next_guess == guess) 
    {
        if (n % guess == 0) 
            return guess;
        else
            return -1;
    }
    return sqrt_recursive(n, next_guess); 
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0) 
        return -1;

    if (n == 0 || n == 1) 
        return n;

    return sqrt_recursive(n, n / 2); 
}

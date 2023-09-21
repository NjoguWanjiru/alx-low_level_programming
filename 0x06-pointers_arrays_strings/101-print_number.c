#include "main.h"
#include <unistd.h> 

/**
 * _custom_putchar - Writes a character to stdout
 * @c: The character to print
 */
void _custom_putchar(char c)
{
    write(1, &c, 1);
}

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
    if (n < 0)
    {
        _custom_putchar('-');
        n = -n;
    }

    if (n / 10 != 0)
    {
        print_number(n / 10);
    }

    _custom_putchar((n % 10) + '0');
}


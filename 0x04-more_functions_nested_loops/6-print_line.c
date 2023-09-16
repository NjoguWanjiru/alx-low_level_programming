#include "main.h"

/**
 * print_line - prints a straight line of underscores
 * @n: the number of times to print the underscore character '_'
 */
void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }

    _putchar('\n');
}

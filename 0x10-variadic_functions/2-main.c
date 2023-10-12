#include <stddef.h>
#include "variadic_functions.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings(", ", 3, "Hello", "world", NULL);
    return (0);
}

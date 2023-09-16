#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 */
void print_numbers(void)
{
    char digit;

    for (digit = '0'; digit <= '9'; digit++)
    {
        write(1, &digit, 1);
    }

    write(1, "\n", 1);
}

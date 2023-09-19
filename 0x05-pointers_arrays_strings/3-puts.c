#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: The input string.
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1); 
        str++;
    }
    write(1, "\n", 1);
}

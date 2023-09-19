#include "main.h"
#include <unistd.h> 
#include <string.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The input string.
 */
void print_rev(char *s)
{
    int length = strlen(s);

    for (int i = length - 1; i >= 0; i--)
    {
        write(1, &s[i], 1); 
    }

    write(1, "\n", 1); 
}

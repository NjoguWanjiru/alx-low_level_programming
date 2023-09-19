#include "main.h"
#include <unistd.h> /* Include the <unistd.h> header for the write function */

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
    int length = 0;
    int i;

    while (str[length] != '\0')
    {
        length++;
    }

    if (length % 2 == 0)
    {
        for (i = length / 2; str[i] != '\0'; i++)
        {
            write(1, &str[i], 1); /* Use write to print one character at a time */
        }
    }
    else
    {
        for (i = (length + 1) / 2; str[i] != '\0'; i++)
        {
            write(1, &str[i], 1); /* Use write to print one character at a time */
        }
    }

    write(1, "\n", 1); /* Print a newline character after the loop */
}

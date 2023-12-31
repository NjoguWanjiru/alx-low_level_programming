#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 * @ac: The argument count.
 * @av: An array of strings containing the arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        printf("Failed to allocate memory\n");
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}

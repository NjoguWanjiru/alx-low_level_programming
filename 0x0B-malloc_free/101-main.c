#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_tab - Prints an array of strings.
 * @tab: The array to print.
 */
void print_tab(char **tab)
{
    if (tab == NULL)
        return;
    for (int i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}
/**
 * main - Entry point.
 * @ac: The argument count.
 * @av: An array of strings containing the arguments.
 *
 * Return: 1 if an error occurred, 0 otherwise.
 */
int main(int ac, char *av[])
{
    char **tab;
    if (ac != 2)
    {
        printf("Usage: %s <string>\n", av[0]);
        return (1);
    }
    tab = strtow(av[1]);
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}

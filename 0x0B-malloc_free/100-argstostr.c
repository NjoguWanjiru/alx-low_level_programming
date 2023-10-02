#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of your program.
 * @ac: The argument count.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a newly allocated string containing the concatenated
 *         arguments, separated by newlines, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
    char *concat;
    int total_length = 0;
    int i, j, k = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            total_length++;
            j++;
        }
        total_length++;
    }

    concat = malloc(sizeof(char) * (total_length + 1));

    if (concat == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            concat[k++] = av[i][j++];
        }
        concat[k++] = '\n';
    }

    concat[k] = '\0';

    return (concat);
}

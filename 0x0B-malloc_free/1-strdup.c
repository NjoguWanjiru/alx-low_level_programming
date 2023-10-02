#include <stdlib.h>

/**
 * _strdup - Duplicates a string using malloc.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
    char *dup_str;
    unsigned int i, len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len] != '\0')
        len++;

    dup_str = malloc(sizeof(char) * (len + 1));

    if (dup_str == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        dup_str[i] = str[i];

    return (dup_str);
}

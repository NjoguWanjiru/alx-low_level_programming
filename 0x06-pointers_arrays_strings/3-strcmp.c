#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Negative if s1 is less than s2, positive if s1 is greater than s2,
 *         or 0 if they are equal.
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
    {
        return (0);
    }
    else if (s1[i] == '\0')
    {
        return (-1);
    }
    else
    {
        return (1);
    }
}

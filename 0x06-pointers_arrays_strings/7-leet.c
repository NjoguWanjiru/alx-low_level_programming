#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: A pointer to the modified string str
 */
char *leet(char *str)
{
    int i = 0;
    char leet_table[] = "aAeEoOtTlL";
    char leet_replace[] = "443301711";

    while (str[i] != '\0')
    {
        int j = 0;
        while (leet_table[j] != '\0')
        {
            if (str[i] == leet_table[j])
            {
                str[i] = leet_replace[j];
                break;
            }
            j++;
        }
        i++;
    }

    return str;
}

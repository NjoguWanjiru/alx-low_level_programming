#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @str: The string to modify
 *
 * Return: A pointer to the modified string str
 */
char *cap_string(char *str)
{
    int i = 0;
    int is_word_start = 1;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (is_word_start)
            {
                str[i] = str[i] - 32;
            }
            is_word_start = 0;
        }
        else
        {
            if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
                || str[i] == ',' || str[i] == ';' || str[i] == '.'
                || str[i] == '!' || str[i] == '?' || str[i] == '"'
                || str[i] == '(' || str[i] == ')' || str[i] == '{'
                || str[i] == '}')
            {
                is_word_start = 1;
            }
            else
            {
                is_word_start = 0;
            }
        }
        i++;
    }

    return str;
}

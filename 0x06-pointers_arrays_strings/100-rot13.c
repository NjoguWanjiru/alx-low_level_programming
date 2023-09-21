#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: The string to encode
 *
 * Return: A pointer to the modified string str
 */
char *rot13(char *str)
{
    char *start = str;
    char *rot13_table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot13_output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    while (*str != '\0')
    {
        char *lookup = rot13_table;
        char *replacement = rot13_output;
        while (*lookup != '\0')
        {
            if (*str == *lookup)
            {
                *str = *replacement;
                break;
            }
            lookup++;
            replacement++;
        }
        str++;
    }

    return start;
}

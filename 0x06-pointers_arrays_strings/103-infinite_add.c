#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer r
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int i, j, k;
    int len1 = 0, len2 = 0, max_len;

    while (n1[len1])
        len1++;
    while (n2[len2])
        len2++;

    max_len = (len1 > len2) ? len1 : len2;

    if (max_len + 1 > size_r)
        return (0);

    r[max_len + 1] = '\0';
    len1--;
    len2--;

    for (i = max_len, j = len1, k = len2; i >= 0; i--, j--, k--)
    {
        int digit1 = (j >= 0) ? (n1[j] - '0') : 0;
        int digit2 = (k >= 0) ? (n2[k] - '0') : 0;
        int sum = digit1 + digit2 + carry;

        carry = sum / 10;
        r[i] = (sum % 10) + '0';
    }

    if (carry == 1)
    {
        if (max_len + 2 > size_r)
            return (0);

        for (i = max_len + 1; i > 0; i--)
            r[i] = r[i - 1];
        r[0] = '1';
        return (r);
    }

    return (r + 1);
}

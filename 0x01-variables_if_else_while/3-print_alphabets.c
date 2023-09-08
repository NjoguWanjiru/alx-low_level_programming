#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    letter = 'A';

    while (letter <= 'Z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n'); // Print a newline character to end the line

    return (0);
}

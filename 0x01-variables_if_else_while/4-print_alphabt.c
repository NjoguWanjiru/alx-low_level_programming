#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'e' && letter != 'q')
        {
            putchar(letter);
        }
    }

    putchar('\n'); // Print a newline character to end the line

    return (0);
}

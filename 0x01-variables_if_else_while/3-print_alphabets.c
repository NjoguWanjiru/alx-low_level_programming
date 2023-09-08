#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z' || letter <= 'Z'; letter++)
    {
        if (letter > 'Z' && letter <= 'z')
        {
            letter = 'A';
        }
        putchar(letter);
    }

    putchar('\n'); // Print a newline character to end the line

    return (0);
}

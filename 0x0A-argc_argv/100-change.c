#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int amount, coins;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    amount = atoi(argv[1]);

    if (amount < 0)
    {
        printf("0\n");
        return (0);
    }

    coins = 0;

    while (amount >= 25)
    {
        coins++;
        amount -= 25;
    }

    while (amount >= 10)
    {
        coins++;
        amount -= 10;
    }

    while (amount >= 5)
    {
        coins++;
        amount -= 5;
    }

    while (amount >= 2)
    {
        coins++;
        amount -= 2;
    }

    coins += amount;

    printf("%d\n", coins);

    return (0);
}

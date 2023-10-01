#include <stdio.h>

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int main(void)
{
    int i;

    i = 0; /* Set i to 0 to test the case of 0 */

    /* Add your code here to check if i is positive, negative, or zero */
    if (i > 0)
    {
        printf("%d is positive\n", i);
    }
    else if (i < 0)
    {
        printf("%d is negative\n", i);
    }
    else
    {
        printf("%d is zero\n", i);
    }

    return (0);
}

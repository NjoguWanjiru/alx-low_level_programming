#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: pointer to the newly created array
 *         NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
    int *arr;
    int size, i;

    if (min > max)
        return (NULL);

    size = max - min + 1;
    arr = malloc(sizeof(int) * size);

    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = min++;

    return (arr);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;
    int i;

    a = array_range(0, 10);
    if (a == NULL)
    {
        printf("array_range failed\n");
        return (1);
    }

    for (i = 0; i <= 10; i++)
        printf("%d ", a[i]);

    printf("\n");

    free(a);
    return (0);
}

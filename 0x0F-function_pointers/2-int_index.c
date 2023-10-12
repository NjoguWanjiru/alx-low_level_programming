#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: Index of the first element for which cmp function doesn't return 0.
 * If no element matches or size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array != NULL && cmp != NULL && size > 0)
    {
        int i;

        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]) != 0)
                return i;
        }
    }

    return -1;
}

#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: If nmemb or size is 0, or if malloc fails, return NULL.
 * Otherwise, return a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr;
    unsigned int i;
    unsigned int total_size;

    if (nmemb == 0 || size == 0)
        return (NULL);

    total_size = nmemb * size;
    ptr = malloc(total_size);

    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < total_size; i++)
        ptr[i] = 0;

    return (ptr);
}

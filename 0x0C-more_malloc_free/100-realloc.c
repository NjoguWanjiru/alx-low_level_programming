#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 *         If new_size == old_size, return ptr.
 *         If ptr is NULL, it is equivalent to malloc(new_size).
 *         If new_size is zero, and ptr is not NULL, it is equivalent to
 *         free(ptr) and return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    /* If new_size is zero, free ptr and return NULL */
    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    /* If ptr is NULL, it is equivalent to malloc(new_size) */
    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        if (new_ptr == NULL)
            return (NULL);
        return (new_ptr);
    }

    /* If new_size == old_size, return ptr */
    if (new_size == old_size)
        return (ptr);

    /* Allocate a new memory block with malloc */
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);

    /* Copy the contents from the old block to the new block */
    if (new_size > old_size)
        memcpy(new_ptr, ptr, old_size);
    else
        memcpy(new_ptr, ptr, new_size);

    /* Free the old memory block */
    free(ptr);

    return (new_ptr);
}

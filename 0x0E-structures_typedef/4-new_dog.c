#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Duplicates a string in memory
 * @str: The string to duplicate
 *
 * Return: A pointer to the newly allocated string, or NULL if allocation fails.
 */
char *_strdup(char *str)
{
    char *dup_str;
    unsigned int i, len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len])
        len++;

    dup_str = malloc(sizeof(char) * (len + 1));

    if (dup_str == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        dup_str[i] = str[i];

    return (dup_str);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: A pointer to the newly created dog_t structure, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog_ptr;

    new_dog_ptr = malloc(sizeof(dog_t));

    if (new_dog_ptr == NULL)
        return (NULL);

    new_dog_ptr->name = _strdup(name);
    new_dog_ptr->age = age;
    new_dog_ptr->owner = _strdup(owner);

    if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
    {
        free(new_dog_ptr->name);
        free(new_dog_ptr->owner);
        free(new_dog_ptr);
        return (NULL);
    }

    return (new_dog_ptr);
}

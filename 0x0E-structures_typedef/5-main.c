#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");

    if (my_dog != NULL)
    {
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
        free_dog(my_dog);
    }
    else
    {
        printf("Failed to create a new dog\n");
    }

    return (0);
}

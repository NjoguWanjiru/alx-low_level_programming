#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog with the following elements:
 * @name: Name of the dog (char *)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (char *)
 */
struct dog {
    char *name;
    float age;
    char *owner;
};

/* Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

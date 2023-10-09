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

/* Define a new type dog_t as an alias for struct dog */
typedef struct dog dog_t;

/* Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Function prototype for print_dog */
void print_dog(struct dog *d);

/* Function prototype for new_dog */
dog_t *new_dog(char *name, float age, char *owner);

/* Function prototype for free_dog */
void free_dog(dog_t *d);

#endif /* DOG_H */

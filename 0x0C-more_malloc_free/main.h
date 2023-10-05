#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

void simple_print_buffer(char *buffer, unsigned int size);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif /* MAIN_H */

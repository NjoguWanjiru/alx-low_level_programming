#include <stdio.h>

void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - Prints the specified text before the main function.
 */
void print_before_main(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

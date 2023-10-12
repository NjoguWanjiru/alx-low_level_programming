#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    printf("Printing elements:\n");
    array_iterator(array, 5, &print_elem);

    printf("\nPrinting elements in hexadecimal:\n");
    array_iterator(array, 5, &print_elem_hex);

    return (0);
}

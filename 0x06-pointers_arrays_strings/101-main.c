#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_char - Write a character to stdout
 * @c: The character to print
 */
void print_char(char c)
{
    write(1, &c, 1);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    print_char('\n');
    print_number(402);
    print_char('\n');
    print_number(1024);
    print_char('\n');
    print_number(0);
    print_char('\n');
    print_number(-98);
    print_char('\n');
    return (0);
}

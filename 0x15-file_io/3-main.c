#include "main.h"

/**
 * main - Copies the content of one file to another.
 * @ac: The number of arguments.
 * @av: The arguments.
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
    int cp_status;

    if (ac != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

    cp_status = cp(av[1], av[2]);

    if (cp_status == 98)
        dprintf(2, "Error: Can't read from file %s\n", av[1]);
    else if (cp_status == 99)
        dprintf(2, "Error: Can't write to file %s\n", av[2]);
    else if (cp_status == 100)
        dprintf(2, "Error: Can't close file descriptor\n");

    return (cp_status);
}

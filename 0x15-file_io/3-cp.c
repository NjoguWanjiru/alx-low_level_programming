#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Copies the content of one file to another.
 * @ac: The number of arguments.
 * @av: The arguments.
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
    int file_from, file_to, rd, wr;
    char buffer[1024];

    if (ac != 3)
        dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

    file_from = open(av[1], O_RDONLY);
    if (file_from == -1)
        dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

    file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1)
        dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);

    while ((rd = read(file_from, buffer, 1024)) > 0)
    {
        wr = write(file_to, buffer, rd);
        if (wr == -1)
            dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
    }

    if (rd == -1)
        dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

    if (close(file_from) == -1)
        dprintf(2, "Error: Can't close fd %d\n", file_from), exit(100);
    if (close(file_to) == -1)
        dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);

    return (0);
}

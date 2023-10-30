#include "main.h"

/**
 * main - Displays the information contained in the ELF header of an ELF file.
 * @ac: The number of arguments.
 * @av: The arguments.
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
    int elf_header_status;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s elf_filename\n", av[0]);
        exit(98);
    }

    elf_header_status = elf_header(av[1]);

    if (elf_header_status == 98)
        dprintf(2, "Error: Not an ELF file\n");
    else if (elf_header_status == 99)
        dprintf(2, "Error: Can't open file %s\n", av[1]);
    else if (elf_header_status == 100)
        dprintf(2, "Error: Can't read from file %s\n", av[1]);

    return (elf_header_status);
}

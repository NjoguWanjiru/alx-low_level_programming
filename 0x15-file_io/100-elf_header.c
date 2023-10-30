#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_elf_header(Elf64_Ehdr *header);

int main(int ac, char **av)
{
    int fd;
    Elf64_Ehdr header;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s elf_filename\n", av[0]);
        exit(98);
    }

    fd = open(av[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(2, "Error: Can't open file %s\n", av[1]);
        exit(98);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header))
    {
        dprintf(2, "Error: Can't read from file %s\n", av[1]);
        close(fd);
        exit(98);
    }

    close(fd);
    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
    {
        dprintf(2, "Error: Not an ELF file\n");
        exit(98);
    }

    display_elf_header(&header);
    return (0);
}

void display_elf_header(Elf64_Ehdr *header)
{
    printf("ELF Header:\n");
    printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
           header->e_ident[EI_MAG0], header->e_ident[EI_MAG1], header->e_ident[EI_MAG2], header->e_ident[EI_MAG3],
           header->e_ident[EI_CLASS], header->e_ident[EI_DATA], header->e_ident[EI_VERSION], header->e_ident[EI_OSABI],
           header->e_ident[EI_ABIVERSION], header->e_ident[EI_PAD], header->e_ident[EI_PAD + 1], header->e_ident[EI_PAD + 2],
           header->e_ident[EI_PAD + 3], header->e_ident[EI_PAD + 4], header->e_ident[EI_PAD + 5], header->e_ident[EI_PAD + 6]);
    printf("  Class:                            %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                             %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                          %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                           %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "UNIX - Other");
    printf("  ABI Version:                      %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                             %s (Executable file)\n", (header->e_type == ET_EXEC) ? "EXEC" : "Other");
    printf("  Entry point address:              0x%lx\n", header->e_entry);
}

#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Read and print the contents of a text file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int file_descriptor, num_bytes_read, num_bytes_written;
    char *buffer;

    if (filename == NULL)
    {
        dprintf(2, "Error: filename is NULL\n");
        return (0);
    }

    file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1)
    {
        dprintf(2, "Error: Couldn't open file %s\n", filename);
        return (0);
    }

    buffer = malloc(letters);
    if (buffer == NULL)
    {
        dprintf(2, "Error: Memory allocation failed\n");
        close(file_descriptor);
        return (0);
    }

    num_bytes_read = read(file_descriptor, buffer, letters);
    if (num_bytes_read == -1)
    {
        dprintf(2, "Error: Couldn't read from file\n");
        free(buffer);
        close(file_descriptor);
        return (0);
    }

    num_bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);
    if (num_bytes_written == -1 || num_bytes_written != num_bytes_read)
    {
        dprintf(2, "Error: Couldn't write to stdout\n");
        free(buffer);
        close(file_descriptor);
        return (0);
    }

    free(buffer);
    close(file_descriptor);
    return (num_bytes_written);
}

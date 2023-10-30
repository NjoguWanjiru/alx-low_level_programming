#include "main.h"

/**
 * create_file - Create a file with the specified text content.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    int file_descriptor, write_status, length = 0;

    if (filename == NULL)
        return (-1);

    file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (file_descriptor == -1)
        return (-1);

    if (text_content)
    {
        while (text_content[length])
            length++;

        write_status = write(file_descriptor, text_content, length);
        if (write_status == -1)
        {
            close(file_descriptor);
            return (-1);
        }
    }

    close(file_descriptor);
    return (1);
}

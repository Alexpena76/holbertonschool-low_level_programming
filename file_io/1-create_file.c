#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creates a file with specified content
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 * 
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t bytes_written;
    ssize_t content_length;

    if (filename == NULL)
    {
        return (-1);
    }

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd == -1)
    {
        return (-1);
    }

    if (text_content == NULL)
    {
        close(fd);
        return (1);
    }

    content_length = strlen(text_content);

    bytes_written = write(fd, text_content, content_length);
    if (bytes_written == -1 || bytes_written != content_length)
    {
        close(fd);
        return (-1);
    }

    close(fd);
    return (1);
}
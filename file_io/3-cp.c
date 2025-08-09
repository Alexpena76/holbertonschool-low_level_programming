#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * write_string - Writes a string to file descriptor
 * @fd: File descriptor to write to
 * @str: String to write
 */
void write_string(int fd, char *str)
{
    int len = 0;
    
    /* Calculate string length manually */
    while (str[len])
        len++;
    
    write(fd, str, len);
}

/**
 * write_number - Writes a number to file descriptor
 * @fd: File descriptor to write to  
 * @num: Number to write
 */
void write_number(int fd, int num)
{
    char digits[20];
    int i = 0, j;
    
    if (num == 0)
    {
        write(fd, "0", 1);
        return;
    }
    
    /* Convert number to string manually */
    while (num > 0)
    {
        digits[i++] = (num % 10) + '0';
        num /= 10;
    }
    
    /* Write digits in reverse order */
    for (j = i - 1; j >= 0; j--)
        write(fd, &digits[j], 1);
}

void close_file(int fd)
{
    if (close(fd) == -1)
    {
        write_string(STDERR_FILENO, "Error: Can't close fd ");
        write_number(STDERR_FILENO, fd);
        write_string(STDERR_FILENO, "\n");
        exit(100);
    }
}

int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
    {
        write_string(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        write_string(STDERR_FILENO, "Error: Can't read from file ");
        write_string(STDERR_FILENO, argv[1]);
        write_string(STDERR_FILENO, "\n");
        exit(98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        write_string(STDERR_FILENO, "Error: Can't write to ");
        write_string(STDERR_FILENO, argv[2]);
        write_string(STDERR_FILENO, "\n");
        close_file(fd_from);
        exit(99);
    }

    /* Copy file content in chunks */
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
        {
            write_string(STDERR_FILENO, "Error: Can't write to ");
            write_string(STDERR_FILENO, argv[2]);
            write_string(STDERR_FILENO, "\n");
            close_file(fd_from);
            close_file(fd_to);
            exit(99);
        }
    }

    /* Check for read error */
    if (bytes_read == -1)
    {
        write_string(STDERR_FILENO, "Error: Can't read from file ");
        write_string(STDERR_FILENO, argv[1]);
        write_string(STDERR_FILENO, "\n");
        close_file(fd_from);
        close_file(fd_to);
        exit(98);
    }

    /* Close both files */
    close_file(fd_from);
    close_file(fd_to);

    return (0);
}


#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
* close_file - Closes a file descriptor with error handling
* @fd: File descriptor to close
*
* Return: Void function
*/

void close_file(int fd)
{
	char error_msg[100];
	int len;
	
	if (close(fd) == -1)
	{
		len = sprintf(error_msg, "Error: Can't close fd %d\n", fd);
        write(STDERR_FILENO, error_msg, len);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, or exit with specific error codes on failure
 */

 int main(int argc, char *argv[])
 {
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	char error_msg[200];
	int len;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		len = sprintf(error_msg, "Error: Can't read from file %s\n", argv[1]);
        write(STDERR_FILENO, error_msg, len);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		len = sprintf(error_msg, "Error: Can't write to %s\n", argv[2]);
        write(STDERR_FILENO, error_msg, len);
		close_file(fd_from);
		exit(99);
	}

	while (1)
	{
		bytes_read = read(fd_from, buffer, 1024);

		if (bytes_read == 0)
		{
			break;
		}

		if (bytes_read == -1)
		{
			len = sprintf(error_msg, "Error: Can't read from file %s\n", argv[1]);
        	write(STDERR_FILENO, error_msg, len);
			close_file(fd_from);
			close_file(fd_to);
			exit(98);
		}

		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			len = sprintf(error_msg, "Error: Can't write to %s\n", argv[2]);
        	write(STDERR_FILENO, error_msg, len);
			close_file(fd_from);
			close_file(fd_to);
			exit(99);
		}
	}

	close_file(fd_from);
	close_file(fd_to);

	return (0);
 }

#include "main.h"

void close_fd(int fd);

/**
 * main - program that copies the content of a file to another file.
 *
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, -1 on failure
 */

int main(int __attribute__((unused)) argc, char **argv)
{
	int f_from, f_to, readed, writen;
	char *file_from = argv[1], *file_to = argv[2];
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_from = open(file_from, O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	f_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	readed = read(f_from, buffer, 1024);
	while (readed != 0)
	{
		if (readed == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			close_fd(f_from);
			close_fd(f_to);
			exit(98);
		}

		writen = write(f_to, buffer, readed);

		if (writen != readed)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close_fd(f_from);
			close_fd(f_to);
			exit(99);
		}

		readed = read(f_from, buffer, 1024);
	}

	close_fd(f_from);
	close_fd(f_to);
	return (0);
}

/**
 * close_fd - close_fd
 * @fd: file descriptor
 */

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

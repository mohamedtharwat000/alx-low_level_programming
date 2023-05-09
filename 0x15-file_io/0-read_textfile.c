#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: input file name.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print
 *
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, letters_readed, letters_writen;
	char *buffer;

	if (!filename)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	letters_readed = read(fd, buffer, letters);

	letters_writen = write(STDOUT_FILENO, buffer, letters_readed);

	if (fd < 1 || letters_readed < 1 || letters_writen < 1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (letters_writen);
}

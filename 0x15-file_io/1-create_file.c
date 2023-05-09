#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @filename: input file name.
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 *
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (!filename)
	{
		return (-1);
	}

	if (!text_content)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
		{
			return (-1);
		}
	}

	fd = open(filename, O_CREAT | O_EXCL, O_WRONLY, 0600);

	if (fd == -1)
	{
		fd = open(filename, O_TRUNC);
		if (fd == -1)
		{
			return (-1);
		}
	}
	else
	{
		len = strlen(text_content);
		wr = write(fd, text_content, len);
		if (wr <= 0)
		{
			return (-1);
		}
	}

	close(fd);
	return (1);
}


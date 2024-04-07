#include "main.h"

/**
 * create_buffer - 1024 bytes alloc for buffer.
 * @file: File name where buffer store content.
 * Return: The buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Close fd.
 * @fd: The file descriptor.
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Cp content from file A to file B.
 * @argc: Number of args supplied.
 * @argv: An args array.
 * Return: If success 0.
 */

int main(int argc, char *argv[])
{
	int from, to, readIt, writeIt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	readIt = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || readIt == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writeIt = write(to, buffer, readIt);

		if (to == -1 || writeIt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		readIt = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (readIt > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

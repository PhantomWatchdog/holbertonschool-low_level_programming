#include "main.h"

/**
 * append_text_to_file - Add text at end of file.
 * @filename: Argv[1] used as name.
 * @text_content: Argv[2] string to add.
 * Return: On failure and if Argv[1&2] are NULL, -1.
 * else 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int openFile, writeIn, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	openFile = open(filename, O_WRONLY | O_APPEND);
	writeIn = write(openFile, text_content, len);

	if (openFile == -1 || writeIn == -1)
	{
		return (-1);
	}

	close(openFile);

	return (1);
}

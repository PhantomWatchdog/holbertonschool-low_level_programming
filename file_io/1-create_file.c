#include "main.h"

/**
 * create_file - File creation.
 * @filename: Argc[1] will be used as name.
 * @text_content: Argc[2] will be the content.
 * Return: If succeed 1, else -1.
 */

int create_file(const char *filename, char *text_content)
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

	openFile = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	writeIn = write(openFile, text_content, len);

	if (openFile == -1 || writeIn == -1)
	{
		return (-1);
	}

	close(openFile);

	return (1);
}

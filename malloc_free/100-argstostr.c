#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate all args in string.
 * @ac: Arguments count.
 * @av: Arguments values.
 * Return:
 * If result == NULL - NULL.
 * Else - string.
 */

char *argstostr(int ac, char **av)
{
	/* ac = args number, av = args array */
	char *string;
	int args, length, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (args = 0; args < ac; args++)
	{
		/* Check each char of args until '\0' and size++ until last arg */
		for (length = 0; av[args][length]; length++)
			size++;
	}

	string = malloc(sizeof(char) * size + 1);

	if (string == NULL)
		return (NULL);

	index = 0;

	for (args = 0; args < ac; args++)
	{
		/* Cpy chars from av[args][length] to string[] */
		for (length = 0; av[args][length]; length++)
			string[index++] = av[args][length];

		/* \n at end of each arg */
		string[index++] = '\n';
	}

	string[size] = '\0';

	return (string);
}

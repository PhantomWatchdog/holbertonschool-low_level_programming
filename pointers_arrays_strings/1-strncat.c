#include "main.h"

/**
 * _strcat - function used for concatenation,
 * @dest: destination,
 * @src: source,
 * @n: 
 * Return: dest.
 */

/* function declaration with 3 pointer, 3 parameters (*dest, *src, n) */
char *_strncat(char *dest, char *src, int n)
{
    int dest_length = 0;
    int index = 0;

/* determine the dest lenght chain */
    while (dest[index++])
        dest_length++;

/* concatenates the src chain to dest chain with max n added */
    for (index = 0; src[index] && index < n; index++)
        dest[dest_length++] = src[index];

    return dest;
}


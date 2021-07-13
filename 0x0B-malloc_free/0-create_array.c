#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: a.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	if (size == 0)
	{
		return (NULL);
	}

	y = malloc(size * sizeof(char));

	if (y == 0)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		y[x] = c;

	}

	return (y);
}

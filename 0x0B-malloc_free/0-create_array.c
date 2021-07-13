#include "holberton.h"
/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
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

	for (y = 0; y < size; y++)
	{
		y[x] = c;

	}

	return (y);
}

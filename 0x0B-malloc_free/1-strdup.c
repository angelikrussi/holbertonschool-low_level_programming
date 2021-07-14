#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - check the code for Holberton School students.
 * @str: The string that you want to copy.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;

		array = malloc(sizeof(char) * size);
		if (array)
		{
			while (size--)
				array[size] = str[size];

			return (array);
		}
	}
	return ('\0');
}

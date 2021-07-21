#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - This function searches for an integer.
 * @cmp: searches for an integer.
 * @size: size pointer.
 * @array:string.
 * Return: -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	return (-1);

	if (array != NULL && cmp != NULL)
	{

		int i = 0;

		while (i < size)
		{
			i++;
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

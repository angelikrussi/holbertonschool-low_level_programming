#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @action: function ponter
 * @size: size pointer.
 * @array:string.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

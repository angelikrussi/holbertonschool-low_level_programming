#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator-This function executes a function given as a parameter.
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

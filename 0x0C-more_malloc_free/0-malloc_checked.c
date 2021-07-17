#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked- this function that allocates memory using malloc.
 * @b: variable.
 * Return: pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}

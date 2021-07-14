#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional
 * @width:string.
 * @height:string
 * Return: string o null
 */


int **alloc_grid(int width, int height)
{
	int a, b;
	int **c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	c = malloc(sizeof(int *) * height);
	if (c == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		c[a] = malloc(sizeof(int) * width);
		if (c[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(c[b]);
			}
			free(c);
			return (NULL);
		}

		for (b = 0; b < width; b++)
		{
			c[a][b] = 0;
		}
	}
	return (c);
}

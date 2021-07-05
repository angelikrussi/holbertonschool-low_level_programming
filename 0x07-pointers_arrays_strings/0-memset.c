#include "holberton.h"
#include <stdio.h>

/**
 * *_memset - This function that fills memory with a constant byte.
 * @s: memory space
 * @b: blocks
 * @n:fill the blocks
 * Return: s .
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i ++;
	}
	return (s);
}

#include "holberton.h"

/**
 * _memcpy - this function that copies memory area.
 * @dest: A pointer to where you want the function to copy the data.
 * @src: A pointer to the buffer that you want to copy data from.
 * @n: The number of bytes to copy.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

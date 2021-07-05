#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - this function that copies memory area.
 * @dest  : the address of memory to print
 * @src : the size of the memory to print
 * @n
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

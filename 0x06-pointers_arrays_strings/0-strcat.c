#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - this function concatenates two strings.
 *@dest:string
 *@src:string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0' ; a++)
	{
		;
	}
	for (b = 0; src[b] != '\0' ; b++)
	{
		dest[a] = src[b];
		a++;
	}

	return (dest);
}

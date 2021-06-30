#include "holberton.h"
#include <stdio.h>

/**
 *_strcpy - Copies the string pointed to by src
 *@dest: variable
 *@src: variable
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a))
	{

		*(dest + a) = *(src + a);
		a++;
	}

	*(dest + a) = '\0';
	return (dest);

}

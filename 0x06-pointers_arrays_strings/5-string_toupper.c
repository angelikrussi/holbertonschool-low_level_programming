#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string
 *
 * Return: address of s
 */
char *string_toupper(char *s)
{
	int a = 0;

	for (a = 0; s[a]; a++)
	{
		if (s[a] >= 97 && s[a] <= 122)
			s[a] -=  32;
	}
	return (s);
}

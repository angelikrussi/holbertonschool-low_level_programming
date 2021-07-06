#include "holberton.h"

/**
 * _strpbrk - this function that gets the length of a prefix substring.
 * @s: This is the main C string to be scanned.
 * @accept: This is the small string to be searched with-in haystack string.
 * Return: 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		int b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
			b++;
		}
	}
	return (0);
}

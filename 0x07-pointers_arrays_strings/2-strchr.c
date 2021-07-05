#include "holberton.h"

/**
 * _strchr -  function that locates a character in a string.
 *@s:pointer to the null-terminated byte string to be analyzed
 *@c:character to search for
 * Return:  0.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}

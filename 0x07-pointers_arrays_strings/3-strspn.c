#include "holberton.h"
/**
 * _strspn - this  function that gets the length.
 * @s: sof the maximum initial segment of the string pointed
 * @accept: bytes from the string pointed
 * Return: 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		while (*accept)
			{
				if (s[a] == *accept)
					return (a);
				a++;
			}
		s++;
	}
	return (0);
}

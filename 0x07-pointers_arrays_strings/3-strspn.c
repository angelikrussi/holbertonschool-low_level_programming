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
	int b = 0;
	int c = 0;

	while (s[a] != '\0')
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					c++;
			}
		}
		else
			return (c);
		a++;
	}
	return (c);
}

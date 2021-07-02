#include "holberton.h"
#include <stdio.h>

/**
 *_strcmp - this function that compares two strings.
 *@s1:string
 *@s2:string
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	for (a = 0; s1[a] != '\0'; a++)
	{
		;
	}

	for (b = 0; s2[b] != '\0'; b++)
	{
		if (s1[a] == s2[b])
		{
			return (0);
		}

		else if (s1[a] > s2[b])

		{
			return (s1[a] - s2[b]);
		}

		else

		{
			return (s1[a] + s2[b]);
		}
	}
}

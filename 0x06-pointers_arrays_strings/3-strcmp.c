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
	int a;

	for (a = 0; (s1[a] != '\0' && s2[a] != '\0') && s1[a] == s2[a]; a++)
	{
	}
	if (s1[a] < s2[a])
	{
		return (s1[a] - s2[a]);
	}

	else if (s1[a] > s2[a])
	{
		return (s1[a] - s2[a]);
	}

	else
	{
		return (s1[a] + s2[a]);
	}
}

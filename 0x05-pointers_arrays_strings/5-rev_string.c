#include "holberton.h"
#include <stdio.h>

/**
 *rev_string - This function that reverses a string..
 *@s: variable
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0;
	int l;
	char t;

	for (l = 0; s[l] != 0; l++)
	{
	}
	for (l = l - 1; i < l; i++)
	{
		t = s[i];
		s[i] = s[l];
		s[l] = t;
		l--;
	}
}

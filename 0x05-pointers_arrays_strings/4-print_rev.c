#include "holberton.h"

/**
 * print_rev - This function that prints a string in reverse.
 *@s: variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int r = 0;
	int e;

	while (s[r] != '\0')
	{
		r++;
	}
	for (e = r - 1; e >= 0; e--)
	{
		_putchar(s[e]);
	}
	_putchar('\n');
}

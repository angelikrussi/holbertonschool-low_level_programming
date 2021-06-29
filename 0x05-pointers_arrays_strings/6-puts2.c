#include "holberton.h"

/**
 * puts2 -prints every other character of a string.
 * @str: variable
 * Return: Always 0.
 */
void puts2(char *str)
{
	int n;
	int x;

	for (n = 0; str[n] != 0 ; n++)
	{
		if (n % 2 == 0)
		{
			x = str[n];
			_putchar (x);
		}
	}
		_putchar('\n');
}

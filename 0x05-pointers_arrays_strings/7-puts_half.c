#include "holberton.h"

/**
 * puts_half-function that prints half of a string.
 * @str: variable
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int n, x;
	char l;

	for (n = 0; str[n] != '\0'; n++)
	{
	}

	if (n % 2 == 0)
	{
		for ((x = n / 2); str[x] != 0; x++)
		{
			l = str[x];
			_putchar (l);
		}
	}

	else
	{
		for (x = ((n - 1) / 2); str[x] != 0; x++)
		{
			l = str[x];
			_putchar (l);
		}
	}
		_putchar('\n');
}

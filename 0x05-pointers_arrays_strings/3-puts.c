#include "holberton.h"

/**
 *_puts -  function that prints a string.
 * @str: variable.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}

#include "holberton.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9.
 * Return: 0
 */
void print_most_numbers(void)
{
	int h;

	for (h = 48 ; h <= 57 ; h++)
	{
		if (h != 50 && h != 52)
		{
		_putchar (h);
		}
	}
	_putchar ('\n');
}

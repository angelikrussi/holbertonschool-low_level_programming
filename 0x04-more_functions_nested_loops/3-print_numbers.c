#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9.
 * Return: 0
 */
void print_numbers(void)
{
	int h;

	for (h = 48 ; h <= 57 ; h++)
	{
		_putchar (h);
	}
	_putchar ('\n');
}

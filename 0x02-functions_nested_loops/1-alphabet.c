#include "holberton.h"
/**
 * print_alphabet - this function that prints the alphabet, in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int h;

	for (h = 97; h <= 122; h++)
	{
		_putchar(h);
	}
	_putchar('\n');
}

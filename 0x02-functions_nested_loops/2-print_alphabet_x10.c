#include "holberton.h"
/**
 * main - this function function that prints the alphabet.
 *
 * Return: Always 10.
 */
void print_alphabet_x10(void)
{
	int h,j;

	for (h = 1; h <= 10; h++)
	{
		for (j =97; j <= 122 ; j ++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

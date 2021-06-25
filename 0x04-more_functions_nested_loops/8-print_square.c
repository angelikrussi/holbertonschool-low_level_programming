#include "holberton.h"
/**
 *print_square - This function that prints a square.
 *@size:variables
 */
void print_square(int size)
{
	int m, a;

	for (m = 1; m <= size; m++)
	{
		for (a = 1; a <= size; a++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

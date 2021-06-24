#include "holberton.h"
/**
 *print_diagonal - draw a diagonal line.
 *@n:line number
 */
void print_diagonal(int n)
{
	int m, a;

	if (n <= 0)
		_putchar('\n');
	for (m = 1; m <= n; m++)
	{
		for (a = 1; a <= m; a++)
		{
			if (m > 1 && a > 1)
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

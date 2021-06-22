#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Void
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		for (y = 1; y <= 9; y++)
		{
			_putchar(' ');
			if (x * y < 10)
			{
				_putchar(' ');
				_putchar(x * y  + '0');
			}
			else
			{
				_putchar(x * y / 10 + '0');
				_putchar(x * y % 10 + '0');
			}
			if (y < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}

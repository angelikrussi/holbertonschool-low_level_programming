#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int h, s;

	for (h = 0; h < 24; h++)
	{
		for (s = 0; s < 60; s++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
			_putchar('\n');
		}
	}

}

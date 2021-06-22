#include "holberton.h"
/**
 * print_sign - this function prints the sign of a number.
 *@n: recibe los datos y compara
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (1);
	}
}

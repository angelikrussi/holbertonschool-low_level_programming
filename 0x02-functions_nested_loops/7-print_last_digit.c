#include "holberton.h"
#include <stdlib.h>
/**
 * print_last_digit - this function prints  the last digit of a number.
 *@n: receive the data
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int l = abs(n % 10);

	_putchar (l + '0');
	return (l);

}

#include "main.h"
/**
 * print_binary -  this function that prints the binary
 * representation of a number.
 * @n: data entry
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	/*x >> 1 is equivalent to x / 2 */
	if (n > 1)
		print_binary(n >> 1);
	/*x & 1 is equivalent to x % 2*/
	_putchar((n & 1) + '0');
}

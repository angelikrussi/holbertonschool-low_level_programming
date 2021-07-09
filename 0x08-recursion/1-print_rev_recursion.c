#include "holberton.h"
/**
 * _print_rev_recursion - check the code for Holberton School students.
 * @s:This is the C string to be written.
 * Return: 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

#include "holberton.h"

/**
 * sqrt_root - checks for the square root of b.
 *@a:residing
 *@b:root
 * Return: Always 0.
 */

int sqrt_root(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrt_root(a + 1, b));
}

/**
 *  _sqrt_recursion -function that returns the natural square root of a number.
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_root(1, n));
}

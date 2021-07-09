#include "holberton.h"
/**
 * factorial - this function returns the factorial of a given number.
 *@n: factotial
 * Return: 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);

	}
	if (n == 0)
	{
		return (1);

	}

	if (n > 0)
	{

		return (n * factorial(n - 1));
	}
	return (0);
}

#include "holberton.h"
/**
 * _abs - this function computes the absolute value of an integer.
 *@n:recibe los datos y compara
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}

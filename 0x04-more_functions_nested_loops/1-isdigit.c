#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - this function that checks for a digit (0 through 9).
 * @c: Number
 * Return: Always 1 or 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

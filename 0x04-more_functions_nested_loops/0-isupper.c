#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - This function that checks for uppercase character.
 * @c: it's a letter of the alphabet
 * Return: Always 1.
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

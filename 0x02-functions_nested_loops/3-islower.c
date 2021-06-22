#include "holberton.h"
/**
 * _islower - this function that checks for lowercase character.
 * @c:receive the data and compare
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "holberton.h"
/**
 * _isalpha - this function that checks for letter, lowercase or uppercase
 * @c:receive the data and compare
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

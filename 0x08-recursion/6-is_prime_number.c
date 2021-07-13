#include "holberton.h"
#include "stdio.h"
/**
 *is_prime_number - func that returns 1 if a num is a prime num, 0 otherwise
 *@n: variable
 *Return: zero or one
 */

int is_prime_number(int n)

{
	if (n <= 1)
	{
		return (0);
	}

	if (n == 2 || n == 3 || n == 5 || n == 7)
	{
		return (1);
	}

	else
	{
		return (prime_help(n));
	}

	return (0);
}

/**
 *prime_help - returns 1 if the input integer is a prime number.
 *@n: variable
 *Return: zero or one
 */

int prime_help(int n)
{

	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n == 7)
	{
		return (0);
	}

	else
	{
		return (1);
	}
	return (0);

}

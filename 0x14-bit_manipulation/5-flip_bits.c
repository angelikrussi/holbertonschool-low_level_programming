#include "main.h"
/**
 * flip_bits - this function returns the number of bits
 *  you would need to flip to get from one number to another.
 * @n: data entry
 * @m: positions to move
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, res;

	res = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			res++;
	return (res);
}

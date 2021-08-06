#include "main.h"
/**
 * get_bit - this function returns the value of a bit
 *  at a given index.
 * @n: data entry
 * @index: positions to move
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8;

	if (index > size)
		return (-1);

	return ((n >> index) & 1);
}

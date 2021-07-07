#include "holberton.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, c, p, q = 0, r = 0;

	for (b = 0; b < size; b++)
	{
		p = (b * size) + b;
		q += *(a + p);
	}
	for (c = 0; c < size; c++)
	{
		q = (c * size) + (size - 1 - c);
		r += *(a + p);
	}
	printf("%i, %i\n", q, r);
}

#include "holberton.h"
/**
 * main - this  program that prints Holberto.
 *
 * Return: Always 0.
 */
int main(void)
{
	int h;
	char holb[10] = "Holberton\n";

	for (h = 0; h < 10; h++)
	{
		_putchar(holb[h]);
	}
	return (0);
}

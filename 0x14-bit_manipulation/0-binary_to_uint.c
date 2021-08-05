#include "main.h"
/**
 * binary_to_uint - this function converts a binary number to an unsigned int.
 * @b: linked list pointer.
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base_then = 0;
	unsigned int exp = 1;
	int count = 0;

	if (b == NULL)
		return (0);

	while (b[count] != '\0')
		count++;

	for (count -= 1; count >= 0; count--)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		base_then += (b[count] - '0') * exp;
		exp *= 2;
	}
	return (base_then);
}

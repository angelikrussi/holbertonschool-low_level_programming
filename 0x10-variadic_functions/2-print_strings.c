#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - This function prints strings, followed by a new line.
 * @n: number of elements
 * @separator:separator
 * Return:  0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ab;


	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ab = va_arg(ap, char *);
		if (ab == NULL)
		{
			printf("(nil)");
		}
		printf("%s", ab);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - This function returns the sum of all its parameters.
 * @n: variable.
 * Return:  0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, suma;

	if (n != 0)
	{
		va_start(ap, n);

		suma = 0;
		for (i = 0; i < n; i++)
		suma += va_arg(ap, unsigned int);

		va_end(ap);
		return (suma);
	}
	return (0);
}

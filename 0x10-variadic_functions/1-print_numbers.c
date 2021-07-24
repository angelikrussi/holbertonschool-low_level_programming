#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - This function prints numbers, followed by a new line.
 * @n: number of elements
 * @separator:separator
 * Return:  0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int ab;

	va_start(ap, n); /* Inicializa la lista de argumentos. */

	for (i = 0; i < n; i++)
	{
		ab = va_arg(ap, int);/*Obtiene el siguiente valor de argumento*/

		printf("%d", ab);

		if (i < n - 1 && separator)
		{
			printf(" %s", separator);
		}
	}
	printf("\n");
	va_end(ap);/* Limpiar. */
}

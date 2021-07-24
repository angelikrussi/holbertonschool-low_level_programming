#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Print type char
 * @n: parameters number
 */

void print_char(va_list n)
{
	printf("%c", va_arg(n, int));
}

/**
 * print_int - Prints type integers
 * @n: parameters number
 */

void print_int(va_list n)
{
	printf("%i", va_arg(n, int));
}

/**
 * print_float - Prints type float.
 * @n:parameters number
 */
void print_float(va_list n)
{
	printf("%f", va_arg(n, double));
}

/**
 * print_string - Prints strings.
 * @n: parameters number
 */
void print_string(va_list n)
{
	char *str = va_arg(n, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil)
 */

void print_all(const char * const format, ...)
{
	prnt_t print_f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	char *separator;
	int k = 0, l;
	va_list n;

	va_start(n, format);

	separator = "";

	while (format != NULL && format[k] != '\0')
	{
		l = 0;
		while (k < 4)
		{
			if (print_f[k].tp[0] == format[l])
			{
				printf("%s", separator);
				print_f[k].function(n);
				separator = ", ";
				break;
			}
			k++;
		}
		l++;
	}
	printf("\n");
	va_end(n);
}

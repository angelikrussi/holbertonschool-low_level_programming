#include "holberton.h"
 #include <stdio.h>

/**
 *reverse_array - reverses the content of an array of integers
 *@a: array
 *@n: array
 * Return: 0
 */


void reverse_array(int *a, int n)

{

	int b = 0;
	int tran;

	n = n - 1;

	while (b < n)
	{
		tran = a[b];
		a[b] = a[n];
		a[n] = tran;
		n--;
		b++;
	}

}

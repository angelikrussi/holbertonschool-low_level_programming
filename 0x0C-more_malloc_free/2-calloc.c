#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc -this function that allocates memory for an array, using malloc.
 * @nmemb: the number of elements to be allocated.
 * @size: the size of the element.
 *
 * Return: p.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)/*si nmemb es igual a 0 */
	{
		return (NULL);     /*o size es iagual a  0 retorne NULL*/
	}

	p = malloc(size * nmemb);/* p = asignacion de memoria  zise * nmemb*/
	if (p == NULL) /*si p es igual a 0 */
	{
		return (NULL); /* retorne NULL*/
	}

	for (a = 0; a < nmemb * size; a++) /*a inicia en 0, recorre el numero */
	{                     /*de elementos por tamaño deuno en uno*/
		p[a] = 0;  /*cuando p es recorrido por a se asigna el valor 0*/
	}
	return (p);
}

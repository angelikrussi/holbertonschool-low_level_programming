#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1:str.
 * @s2:str
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int si1 = 0, si2 = 0;
	char *n;

	if (s1)
	{
		for (; s1[si1]; si1++)
			;
	}
	else
	{
		s1 = "";
	}
	if (s2)
	{
		for (; s2[si2]; si2++)
			;
	}
	else
	{
		s2 = "";
	}

	n =  malloc(sizeof(char) * (si1 + si2 + 1));

	if (!n)
		return ('\0');


	if (s1)
	{
		for (si1 = 0; s1[si1]; si1++)
			n[si1] = s1[si1];
	}
	if (s2)
	{
		for (si2 = 0; s2[si2]; si2++)
			n[si1 + si2] = s2[si2];
	}
	n[si1 + si2] = '\0';
	return (n);
}

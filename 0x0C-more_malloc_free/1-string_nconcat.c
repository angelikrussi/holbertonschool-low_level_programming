#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1:array.
 * @s2:array.
 * @n:variable.
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p1, *p2;
	unsigned int a, b;

	p2 = "";
	if (s1 == NULL)
		s1 = p2;
	if (s2 == NULL)
		s2 = p2;
	for (a = 0; s1[a] != '\0'; a++)
		;
	p1 = malloc((a + 1) + (n * sizeof(char)));
	if (p1 == NULL)
		return ('\0');
	for (a = 0; s1[a] != '\0'; a++)
		p1[a] = s1[a];
	b = 0;
	while (s2[b] != '\0' && b < n)
	{
		p1[a] = s2[b];
		b++, a++;
	}
	p1[a] = '\0';
	return (p1);
}

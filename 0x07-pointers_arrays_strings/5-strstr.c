#include "holberton.h"
/**
 * _strstr- function that locates a substring.
 * @haystack:The string to be searched.
 * @needle:The string that we need to search in string.
 * Return: 0.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);

		}
		haystack++;
	}
	if (*haystack == *needle)
		return (haystack);
	else
		return (0);
}

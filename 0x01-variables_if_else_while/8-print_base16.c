#include <stdio.h>
/**
 * main - this  the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
char n;
char c;
for (n = 0; n <= 9; n++)
{
putchar(n + '0');
}
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}

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
for (n = 'a'; n <= 'z'; ++n)
{
putchar(n);
}
for (c = 'A'; c <= 'Z'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it..
 * @argc: argument count
 * @argv: argument vector
 * Return: o.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	(void)argv;
	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i - 1);
	return(0);
}

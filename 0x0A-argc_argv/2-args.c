#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: o.
 */
int main(int argc, char *argv[])
{
	int w = 0;
	
	while (w < argc)
	{
		printf("%s\n", argv[w]);
		w++;
	}
	return (0);
}

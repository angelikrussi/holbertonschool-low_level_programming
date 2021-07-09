#include <stdio.h>
#include <stdlib.h>
/**
 * main - this program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int add = 0;

	if (argc < 1)
	{
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		if (!atoi(argv[a]))
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 *main - print opcodes of a given machine.
 *@argc: number 
 *@argv: vector.
 *Return: 0.
 */
int main(int argc, char *argv[])
{
	int y, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (y = 0; y < x; y++)
	{
		printf("%02hhx", *((char *)main + y));
		if (y  < x - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

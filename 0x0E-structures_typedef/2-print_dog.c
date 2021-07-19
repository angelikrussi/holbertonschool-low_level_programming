#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - check the code for Holberton School students.
 * @d: variable.
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: \n", d->name);
		else
			printf("nil");

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("nil");
	}
}

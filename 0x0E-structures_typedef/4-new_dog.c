#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - this function that creates a new dog..
 *@name: dog name.
 *@age: dog's age.
 *@owner: owner's name.
 * Return:new_dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int i, n, o;
	struct dog *new_dog;

	new_dog = malloc(sizeof(dog_t));

	for (n = 0; name[n]; n++)
		;
	for (o = 0; owner[o]; o++)
		;
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (n + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (o + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= n; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;

	for (i = 0; i <= o; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}

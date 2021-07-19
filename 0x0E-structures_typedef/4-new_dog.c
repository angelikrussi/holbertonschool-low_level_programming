#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - this function that creates a new dog..
 *@name: dog name.
 *@age: dog's age.
 *@owner: owner's name.
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
	return (NULL);

	/* Cpunting name pointer*/
	if (name == NULL)
	{
		free(dog);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(dog);
		free(name);
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}

#ifndef DOG_H
#define _DOG_H

/**
 * struct dog - this function gets the contains the dog data.
 * @name:dog name.
 * @age:dog's age.
 * @owner: owner's name.
 */
struct dog
{
	char *name;
	float age;
	char owner;
};
/* Additional functions*/
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

# endif /* DOG_H*/

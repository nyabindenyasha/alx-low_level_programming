#include "dog.h"
#include <stdlib.h>
#include "2-strlen.c"
#include "9-strcpy.c"

/**
 * new_dog - Create a new dog structure.
 * @name: Name.
 * @age: Age.
 * @owner: Owner.
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_tmp;
	char *owner_tmp;

	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}

	name_tmp = malloc(_strlen(name) + 1);
	if (name_tmp == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	owner_tmp = malloc(_strlen(owner) + 1);
	if (owner_tmp == NULL)
	{
		free(my_dog);
		free(name_tmp);
		return (NULL);
	}

	name_tmp = _strcpy(name_tmp, name);
	owner_tmp = _strcpy(owner_tmp, owner);

	my_dog->name = name_tmp;
	my_dog->age = age;
	my_dog->owner = owner_tmp;
	return (my_dog);
}

#include "dog.h"
#include <stdio.h>

/**
  * init_dog - Inizialize the structure dog.
  * @d: pointer to an element of type dog
  * @name: nameof dog.
  * @age: age of dog.
  * @owner: owner of dog.
  * Return: Always 0.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

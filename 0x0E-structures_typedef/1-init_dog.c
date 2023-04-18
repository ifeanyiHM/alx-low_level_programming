#include <stdlib.h>
#include "dog.h"

/**
* init_dog - A function that initialize a variable of type
* @d: pointer
* @name: parameter 1
* @age: parameter 2
* @owner: parameter 3
* Return: return empty
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}

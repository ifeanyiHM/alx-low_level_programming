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
	struct dog my_dog;
	struct dog *d;

	d = &my_dog;

	d->name = "Poppy";
	d->age = 3.5;
	d->owner = "bob";

	return (dog);
}

#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Struct dog variable
 * @name: Dog's name of type char
 * @age: Dog's age of type float
 * @owner: Dog's owner of type char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

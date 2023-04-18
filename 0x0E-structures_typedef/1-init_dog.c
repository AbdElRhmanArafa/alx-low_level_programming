#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: struct to initialize
 * @name: name of dog
 * @age: age of the dog
 * @owner: the owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

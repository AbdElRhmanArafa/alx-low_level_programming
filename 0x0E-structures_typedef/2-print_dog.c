#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: sturct of dog to print
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("nil\n");

		if (d->age)
			printf("Name: %f\n", d->age);
		else
			printf("nil\n");

		if (d->owner)
			printf("Name: %s\n", d->owner);
		else
			printf("nil\n");
		}
}

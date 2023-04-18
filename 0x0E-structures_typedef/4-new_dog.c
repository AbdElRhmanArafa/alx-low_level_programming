#include "dog.h"
#include <string.h>
/**
 *new_dog - creates a new dog
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 *Return: returns NULL in case
 *of failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = strcopy(doggo->owner, owner);

	return (doggo);
}
#include "dog.h"
#include <stdlib.h>
#include "func.h"

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		return (NULL);
	}
	puppy->name = _strdup(name);
	puppy->owner = _strdup(owner);
	puppy->age = age;

	return (puppy);
}


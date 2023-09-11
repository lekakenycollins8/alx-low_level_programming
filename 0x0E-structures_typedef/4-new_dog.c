#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - Creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: pointer to dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDogPtr = malloc(sizeof(dog_t));

	if (newDogPtr == NULL)
	{
		return (NULL);
	}
	newDogPtr->name = strdup(name);
	newDogPtr->owner = strdup(owner);

	if (newDogPtr->name == NULL || newDogPtr->owner == NULL)
	{
		free(newDogPtr->name);
		free(newDogPtr->owner);
		free(newDogPtr);
		return (NULL);
	}
	newDogPtr->age = age;

	return (newDogPtr);
}

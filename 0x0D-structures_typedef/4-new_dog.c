#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog - once more, with feeling.
 * @name: Dog's name
 * @age: Dog's age.
 * @owner: Dog's human.
 * Return: pointer to dog upon success, NULL upon failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return newdog;
}

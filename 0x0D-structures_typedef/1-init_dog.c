#include "dog.h"
/**
 * init_dog - creates a dog
 * @d: Dog.
 * @name: Dog's name.
 * @age: Dog's age (float).
 * @owner: Dog's human.
 * Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

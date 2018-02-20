#ifndef DOG
#define DOG

/**
 * struct dog - Dog
 * @name: Dog's name
 * @age: Dog's age (float)
 * @owner: Dog's human.
 *
 * Description: A dog, defined via a structure.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif /** DOG */

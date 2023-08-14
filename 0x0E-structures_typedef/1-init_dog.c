#include "dog.h"
/**
 * init_dog - Main Point
 * @d: Pointer to the struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: The owner of the dog
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr = d;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}

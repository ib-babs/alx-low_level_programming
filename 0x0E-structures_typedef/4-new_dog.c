#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Structure pointer
 * @name: Dog name
 * @age: Dog age
 * @owner: The dog owner
 * Return: Pointer to the new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;

	dog_t *ptr = malloc(sizeof(name) * sizeof(age) * sizeof(char));

	char *name_copy = malloc(strlen(name) + 1);
	char *owner_copy = malloc(strlen(owner) + 1);

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (name[i] != '\0')
	{
		name_copy[i] = name[i];
		i++;
	}
	name_copy[i] = '\0';
	free(name_copy);

	j = 0;
	while (owner[j] != '\0')
	{
		owner_copy[j] = owner[j];
		j++;
	}
	owner_copy[j] = '\0';
	free(owner_copy);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}

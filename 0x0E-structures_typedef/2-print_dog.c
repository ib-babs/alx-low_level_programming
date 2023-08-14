#include "dog.h"
#include <stdio.h>
/**
    * print_dog - Function that print dog info
    * @d: Pointer to struct dog
    * Return: Void
    */
void print_dog(struct dog *d)
{
	struct dog *ptr = d;

	if (d != NULL)
	{
		if (ptr->name != NULL)
			printf("Name: %s\n", ptr->name);
		else
			printf("Name: (nil)\n");

		if (ptr->age != '\0')
			printf("Age: %f\n", ptr->age);
		else
			printf("Age: (nil)\n");

		if (ptr->owner != NULL)
			printf("Owner: %s\n", ptr->owner);
		else
			printf("Owner: (nil)\n");
	}
}

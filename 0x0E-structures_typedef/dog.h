#ifndef DOG_STRUCT
#define DOG_STRUCT
/**
 * struct dog - Structure for a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: THe owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif /* DOG_STRUCT */
#ifndef INIT_DOG
#define INIT_DOG
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* INIT_DOG */

#include "hash_tables.h"
/**
 * hash_table_create - Create hash table base on the size specified
 * @size: Size of the hash table
 * Return: New hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!new_hash_table || size <= 0)
	{
		free(new_hash_table);
		return (NULL);
	}

	new_hash_table->array = malloc(size);
	if (!new_hash_table->array)
	{
		free(new_hash_table->array);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_hash_table->array[i] = malloc(sizeof(char *));

	return (new_hash_table);
}

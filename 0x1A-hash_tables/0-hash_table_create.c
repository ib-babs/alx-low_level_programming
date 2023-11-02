#include "hash_tables.h"
/**
 * hash_table_create - Create hash table base on the size specified
 * @size: Size of the hash table
 * Return: New hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = malloc(sizeof(hash_table_t));

	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(new_hash_table->array) * size);

	if (!new_hash_table->array)
		return (NULL);
	for (unsigned long int i = 0; i < size; i++)
		new_hash_table->array[i] = malloc(sizeof(char *));

	return (new_hash_table);
}

int main(void)
{
	hash_table_t *ht = hash_table_create(20);
	unsigned int i;
	for (i = 0; ht->array[i]; i++)
		printf("%p\n", (void *)ht->array[i]);
	return 0;
}
#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: The hash table you want to look into
 * @key: Key to be looked for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);

	if (!ht->array[idx])
		return (NULL);
	return (ht->array[idx]->value);
}

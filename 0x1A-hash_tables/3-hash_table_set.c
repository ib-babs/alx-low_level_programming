#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht:  hash table to add or update the key/value to
 * @key: The key of an element to be added.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision,
 * add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[idx] == NULL)
		ht->array[idx] = node;
	else
	{
		node->next = ht->array[idx];
		ht->array[idx] = node;
	}

	return (1);
}

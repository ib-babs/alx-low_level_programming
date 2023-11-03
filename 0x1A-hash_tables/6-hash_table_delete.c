#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: the hash table
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *aux;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			aux = ht->array[i];
			while (ht->array[i])
			{
				ht->array[i] = ht->array[i]->next;
				free(aux->key);
				free(aux->value);
				free(aux);
				aux = ht->array[i];
			}
		}
	}
	free(ht->array);
	free(ht);
}

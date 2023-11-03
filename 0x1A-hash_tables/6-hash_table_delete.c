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
int main(void)
{
	hash_table_t *ht;
	char *key;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Streetz");
	key = strdup("Tim");
	value = strdup("Britton");
	hash_table_set(ht, key, value);
	key[0] = '\0';
	value[0] = '\0';
	free(key);
	free(value);
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "hetairas", "Bob");
	hash_table_set(ht, "hetairas", "Bob Z");
	hash_table_set(ht, "mentioner", "Bob");
	hash_table_set(ht, "hetairas", "Bob Z Chu");
	hash_table_print(ht);
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}
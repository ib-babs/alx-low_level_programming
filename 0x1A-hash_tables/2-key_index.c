#include "hash_tables.h"
/**
 * key_index - Function that gives you the index of a key.
 * @key: Key to be given
 * @size: Size of the array of the hash table
 * Return: Index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int hash, idx = 0;

	hash = hash_djb2(key);
	idx = hash % size;

	return (idx);
}

#include "lists.h"
/**
 * dlistint_len - Print number of element in the double list
 * @h: head of the dblist
 * Return: Length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{

	size_t node_number;

	for (node_number = 0; h != NULL;)
	{
		h = h->next;
		node_number += 1;
	}
	return (node_number);
}

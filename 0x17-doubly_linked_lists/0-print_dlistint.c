#include "lists.h"
/**
 * print_dlistint - Print element in the double list
 * @h: head of the dblist
 * Return: Length of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_number;

	for (node_number = 0; h != NULL;)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_number += 1;
	}
	return (node_number);
}

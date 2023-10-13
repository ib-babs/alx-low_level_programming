#include "lists.h"
/**
* insert_dnodeint_at_index - Insert node at index specified
* @h: Head of the list
* @idx: Index
* @n: Data to be added
* Return: New node added
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *next_node = NULL, *prev_node = *h;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		next_node = *h;
		*h = new_node;
		(*h)->next = next_node;
	}
	else
	{
		while (idx > 1)
		{
			prev_node = prev_node->next;
			idx--;
		}
		next_node = prev_node->next;
		prev_node->next = new_node;
		new_node->prev = prev_node;
		new_node->next = next_node;
		next_node->prev = new_node;
	}
	if (*h && idx == 0)
		return (new_node);
	return (NULL);
}

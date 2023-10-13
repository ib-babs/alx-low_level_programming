#include "lists.h"
#include "lists.h"
/**
 * add_dnodeint_end - Add element in the double list at end
 * @head: head of the dblist
 * @n: Data to be added
 * Return: Added element to the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp_node = NULL;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{
			tmp_node = *head;
			while (tmp_node->next)
				tmp_node = tmp_node->next;
			tmp_node->next = new_node;
			new_node->prev = tmp_node;
	}
	return (new_node);
}

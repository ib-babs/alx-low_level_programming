#include "lists.h"
/**
* get_dnodeint_at_index - Get node at the index
* @head: Head of the list
* @index: index of the node
* Return: Node at the index if node, Null otherwise
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index != 0)
	{
		head = head->next;
		index--;
	}
	if (head && index == 0)
		return (head);
	return (NULL);
}

#include "lists.h"
/**
 * get_nodeint_at_index - Get node list at nth
 * @head: Head of the node
 * @index: Nth index
 * Return: Node at nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *get_node = NULL;
	unsigned int i = 0;

	get_node = head;

	if (head == NULL || get_node == NULL)
		return (0);

	while (i < index)
	{
		get_node = get_node->next;

		i++;
	}
	return (get_node);
}


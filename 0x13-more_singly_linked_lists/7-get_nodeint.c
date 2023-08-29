#include "lists.h"
/**
 * get_nodeint_at_index - Get node list at nth
 * @head: Head of the node
 * @index: Nth index
 * Return: Node at nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}


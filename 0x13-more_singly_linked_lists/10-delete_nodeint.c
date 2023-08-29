#include "lists.h"
/**
 * delete_nodeint_at_index - As the name implies
 * @head: Pointer to the pointer to first list element
 * @index: Index of the element to delete
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i = 0;

	prev = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = prev->next;
		free(prev);
		return (1);
	}
	if (index == 1)
	{
		prev = (*head)->next;
		(*head)->next = prev->next;
		free(prev);
		return (1);
	}

	while (i < index - 1)
	{
		if (prev->next == NULL)
			return (-1);
		i++;
		prev = prev->next;
		current = prev->next;
	}
	prev->next = current->next;
	free(current);
	return (1);
}

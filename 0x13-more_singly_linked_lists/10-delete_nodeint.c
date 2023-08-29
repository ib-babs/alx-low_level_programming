#include "lists.h"
/**
 * delete_nodeint_at_index - As the name implies
 * @head: Pointer to the pointer to first list element
 * @index: Index of the element to delete
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current = malloc(sizeof(listint_t));

	prev = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		current = prev->next;
		*head = NULL;
		*head = current;
	}
	else
	{
		while (index != 0)
		{
			current = prev;
			prev = prev->next;
			index--;
		}
		current->next = prev->next;
	}
	return (1);
}

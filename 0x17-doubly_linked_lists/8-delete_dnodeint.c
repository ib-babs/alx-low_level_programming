#include "lists.h"
/**
* delete_dnodeint_at_index - as the name implied
* @head: Head of the list
* @index: Node Index
* Return: 1 succes, -1 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev = *head;

	if (head == NULL || !(*head))
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		*head = NULL;
		free(*head);
		*head = temp;
	}
	else
	{
		while (index != 0)
		{
			prev = prev->next;
			index--;
		}
		temp = prev->next;
		temp->prev = prev->prev;
		prev->prev->next = temp;
		free(prev);
		prev = NULL;
	}
	return (1);
}

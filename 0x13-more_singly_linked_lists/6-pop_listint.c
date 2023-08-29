#include "lists.h"
/**
 * pop_listint - Pop last element
 * @head: Pointer to the first list element
 * Return: Head n data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *previous;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	previous = *head;
	*head = (*head)->next;
	free(previous);
	previous = NULL;

	return (n);
}

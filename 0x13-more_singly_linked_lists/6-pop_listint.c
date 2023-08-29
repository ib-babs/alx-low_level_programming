#include "lists.h"
/**
 * pop_listint - Pop last element
 * @head: Pointer to the first list element
 * Return: Head n data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *previous = NULL;

	previous = *head;
	*head = NULL;
	*head = previous->next;
	if (*head == NULL)
		return (0);

	n = previous->n;
	previous = NULL;

	return (n);
}

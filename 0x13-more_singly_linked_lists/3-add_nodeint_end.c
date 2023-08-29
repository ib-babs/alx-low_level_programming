#include "lists.h"
/**
 * add_nodeint_end - Performing stack operation (LIFO)
 * @head: Pointer to the first list
 * @n: Number
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_end, *last;

	add_end = malloc(sizeof(listint_t));

	if (add_end == NULL)
	{
		free(add_end);
		return (NULL);
	}

	add_end->n = n;
	add_end->next = NULL;

	if (*head == NULL)
		*head = add_end;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = add_end;
	}

	return (*head);
}

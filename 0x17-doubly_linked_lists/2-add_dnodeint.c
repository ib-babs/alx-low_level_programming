#include "lists.h"
/**
 * add_dnodeint - Add node to the list
 * @head: Head of the node
 * @n: Integer to add
 * Return: New added node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newP;

	newP = *head;
	*head = malloc(sizeof(dlistint_t));

	if (!(*head))
		return (NULL);

	(*head)->n = n;
	(*head)->next = newP;
	(*head)->prev = NULL;
	return (*head);
}

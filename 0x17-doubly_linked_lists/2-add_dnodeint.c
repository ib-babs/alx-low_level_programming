#include "lists.h"
/**
 * add_dnodeint - Add node to the list
 * @head: Head of the node
 * @n: Integer to add
 * Return: New added node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newP = malloc(sizeof(dlistint_t));

	if (!head || newP == NULL)
		return (NULL);

	newP->n = n;
	newP->next = *head;

	*head = newP;
	return (*head);
}

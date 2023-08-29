#include "lists.h"
/**
 * add_nodeint - Performing stack operation (LIFO)
 * @head: Pointer to the first list
 * @n: Number
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_begin = malloc(sizeof(listint_t));

	if (add_begin == NULL)
	{
		free(add_begin);
		return (NULL);
	}

	add_begin->n = n;
	add_begin->next = *head;

	*head = add_begin;
	return (add_begin);
}

#include "lists.h"
/**
 * insert_nodeint_at_index - as the name implies
 * @head: Pointer to pointer of the first linked element
 * @idx: Index to insert
 * @n: Element to insert
 * Return: Address to the element added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *previous_node = *head, *current_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	current_node = malloc(sizeof(listint_t));

	if (current_node == NULL)
		return (NULL);

	current_node->n = n;

	if (idx == 0)
	{
		current_node->next = *head;
		*head = current_node;
		return (*head);
	}

	while (previous_node != NULL)
	{
		if (i == idx)
		{
			current_node = previous_node->next;
			previous_node->next = current_node;
		}
		i++;
		previous_node = previous_node->next;
	}
	if (idx > i)
		return (NULL);

	return (current_node);
}

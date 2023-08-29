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
	unsigned int i = 1;

	current_node = malloc(sizeof(listint_t));
	current_node->n = n;
	current_node->next = NULL;

	while (i < idx)
	{
		previous_node = previous_node->next;
		i++;
	}
	if (previous_node == NULL)
		return (NULL);
	current_node->next = previous_node->next;
	previous_node->next = current_node;

	return (current_node);
}

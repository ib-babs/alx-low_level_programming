#include "lists.h"
/**
 * add_node_end - Performing stack operation (LIFO)
 * @head: Pointer to the first list
 * @str: String to duplicate
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_end, *last;
	char *duplicate = strdup(str);

	add_end = malloc(sizeof(list_t));

	if (add_end == NULL || duplicate == NULL)
	{
		free(add_end);
		return (NULL);
	}

	add_end->str = duplicate;
	add_end->len = strlen(str);
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

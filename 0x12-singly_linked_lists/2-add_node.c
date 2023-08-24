#include "lists.h"
/**
 * add_node - Performing stack operation (LIFO)
 * @head: Pointer to the first list
 * @str: String to duplicate
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_begin = malloc(sizeof(list_t));

	add_begin->str = strdup(str);
	add_begin->len = strlen(str);
	add_begin->next = *head;

	if (add_begin == NULL)
	{
		free(add_begin);
		return (NULL);
	}
	*head = add_begin;
	return (add_begin);
}

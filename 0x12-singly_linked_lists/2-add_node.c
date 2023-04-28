#include "lists.h"
#include <stdlib.h>

/**
 * add_node - Adds
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	unsigned int length = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	while (str[length])
		length++;

	tmp->str = strdup(str);
	tmp->len = length;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}

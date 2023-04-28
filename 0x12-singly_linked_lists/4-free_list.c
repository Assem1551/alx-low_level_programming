#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free the linked list
 * @head: Address of the first node of a list.
 * Return: Address of the new node.
 **/

void free_list(list_t *head)
{
list_t *tmp, *tmp2;
tmp = head;
while (tmp != NULL)
{
tmp2 = tmp->next;
free(tmp->str);
free(tmp);
tmp = tmp2;
}
}

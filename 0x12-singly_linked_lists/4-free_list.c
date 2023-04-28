#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * Return: Address of the new node.
 **/

void free_list(list_t *head)
{
list_t *tmp, *tmp2;
tmp = head;
while (tmp)
{
tmp2 = head->next;
free(tmp->str);
free(tmp);
 tmp= tmp2;
}
}

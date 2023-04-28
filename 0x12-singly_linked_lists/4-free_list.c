#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

void free_list(list_t *head)
{
struct list_t* tmp;
while (head)
{
tmp = head->next;
free (head);
head = tmp;
}
}

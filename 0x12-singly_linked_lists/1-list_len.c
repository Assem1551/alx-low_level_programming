#include <stdio.h>
#include "lists.h"
/**
 * list_len - Prints singly linked list elements
 * @h: head of the list
 * Return: Integer.
 **/


size_t list_len(const list_t *h)
{
unsigned int sum = 0;
const list_t *tmp;
tmp = h;

while (tmp)
{
sum++;
tmp = tmp->next;
}

return (sum);
}

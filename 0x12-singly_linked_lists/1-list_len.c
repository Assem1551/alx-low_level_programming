#include <stdio.h>
#include "lists.h"
/**
 * list_len - Prints singly linked list elements
 * @h: head of the list
 * Return: Integer.
 **/


size_t list_len(const list_t *h)
{
int sum = 0;
const list_t *tmp;
tmp = h;

while (tmp)
{
sum++;
h = h->next;
}

return (sum);
}

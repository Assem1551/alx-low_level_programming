#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints singly linked list elements
 * @h: head of the list
 * Return: Integer.
 **/


size_t list_len(const list_t *h)
{
int sum = 0;
int i = 0;
const list_t *tmp;
tmp = h;

while (h)
{
sum ++;
h = h->next;
}

return (sum);
}
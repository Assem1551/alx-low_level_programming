#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints singly linked list elements
 * @h: head of the list
 * Return: Integer.
 **/




size_t print_list(const list_t *h)
{
const list_t *tmp;
unsigned int counter = 0;
tmp = h;

while (tmp)
{
if (tmp->str == NULL)
printf("[%u] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", tmp->len, tmp->str);
counter++;
tmp = tmp->next;
}
return (counter);





}

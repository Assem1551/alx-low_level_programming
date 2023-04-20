#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator- executes a function on each element of an array
 * @array:p1
 * @size: p2
 * @action: p3
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int x = 0;
if (array && size && cmp)
{
while (x < size)
{
if (cmp (array[x]))
{
return (x);
}
x++;

}

}
return (-1);

}

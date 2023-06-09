#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Main
 * @s1: input
 * @s2: input
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
unsigned int size1 = 0, size = 0;
char *ptr, *ret;

ptr = s1;
if (s1)
while (*ptr++)
size1++;
else
s1 = "";

ptr = s2;
if (s2)
while (*ptr++)
size++;
else
s2 = "";

ret = malloc(size1 + size + 1);
if (!ret)
return (NULL);

ptr = ret;
while (*s1)
*ptr++ = *s1++;
while (*s2)
*ptr++ = *s2++;
*ptr = 0;

return (ret);
}
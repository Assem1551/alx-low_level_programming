#include "main.h"
/**
* *create_array - creats an array
*@size:size of allocated array
*@c:the value to initialize the array
*Return: 0
*/

char *create_array(unsigned int size, char c)
{
char *s = malloc(size);
if (size == 0 || s == 0)
{
return (0);
}
while (size--)
{
s[size] = c;
}

return (s);
}

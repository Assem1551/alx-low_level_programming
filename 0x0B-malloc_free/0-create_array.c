#include "main.h"

char *create_array(unsigned int size, char c)
{
char *s = malloc (size);
if (size == 0 || s==0)
{
retutn (0);
}
s[0] = c;
return (s);
}
